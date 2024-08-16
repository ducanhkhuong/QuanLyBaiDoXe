using System;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Windows.Forms;
using System.Drawing;
using System.IO.Ports;
using System.Threading;
using System.Web;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using System.Diagnostics;
using System.Reflection;
using Excel = Microsoft.Office.Interop.Excel;
using static System.Net.Mime.MediaTypeNames;

namespace Link
{
    public partial class Form1 : Form
    {   
        public Form1()
        {
            InitializeComponent();
        }

        //Mac dinh khi OpenApp
        private void Form1_Load(object sender, EventArgs e)
        {
            comboBox1.Items.AddRange(new string[] { "COM1", "COM2", "COM3", "COM4", "COM5" , "COM8"});
            comboBox1.SelectedIndex = 2;
            //den bao --> ngat ket noi (red)
            textBox1.BackColor = System.Drawing.Color.Red;
            //Data gửi xe
            dataGridView1.ColumnCount = 6;
            dataGridView1.Columns[0].Name = "STT";
            dataGridView1.Columns[1].Name = "Dữ Liệu";
            dataGridView1.Columns[2].Name = "Giờ/Phút/Giây";
            dataGridView1.Columns[3].Name = "Ngày/Tháng/Năm";
            dataGridView1.Columns[4].Name = "Vị Trí";
            dataGridView1.Columns[5].Name = "Trạng Thái";
            dataGridView1.EndEdit();
            //Data lấy xe
            dataGridView2.ColumnCount = 6;
            dataGridView2.Columns[0].Name = "STT";
            dataGridView2.Columns[1].Name = "Dữ Liệu";
            dataGridView2.Columns[2].Name = "Giờ/Phút/Giây";
            dataGridView2.Columns[3].Name = "Ngày/Tháng/Năm";
            dataGridView2.Columns[4].Name = "Vị Trí";
            dataGridView2.Columns[5].Name = "Trạng Thái";
            dataGridView2.EndEdit();
            CheckForIllegalCrossThreadCalls = false;

            button4.Enabled = false; button4.Text = "Không có dữ liệu"; 
            button5.Enabled = false; button5.Text = "Không có dữ liệu"; 
            button6.Enabled = false; button6.Text = "Không có dữ liệu";
            button7.Enabled = false; button7.Text = "Không có dữ liệu"; 
            button8.Enabled = false; button8.Text = "Không có dữ liệu";
            button9.Enabled = false; button9.Text = "Không có dữ liệu"; 
            button10.Enabled = false; button10.Text = "Không có dữ liệu"; 
            button11.Enabled = false; button11.Text = "Không có dữ liệu"; 
            button12.Enabled = false; button12.Text = "Không có dữ liệu"; 
            button13.Enabled = false; button13.Text = "Không có dữ liệu";
            button14.Enabled = false; button14.Text = "Không có dữ liệu"; 
            button15.Enabled = false; button15.Text = "Không có dữ liệu";
        }

        //ket noi PC --> Arduino
        private void button2_Click(object sender, EventArgs e)
        {
            if (!COM.IsOpen)
            {
                //den bao --> ket noi (xanh)
                textBox1.BackColor = System.Drawing.Color.Green;
                button2.Text = "Ngắt kết nối";
                COM.PortName = comboBox1.Text;
                COM.BaudRate = Convert.ToInt32("115200");
                COM.DataReceived += COM_DataReceived;
                COM.Open();
                
            }
            else
            {
                button2.Text = "Kết nối";
                textBox1.BackColor = System.Drawing.Color.Red;
                MessageBox.Show("Đã dừng kết nối!");
                COM.Close();
            }
        }


        //bien global
        string Data = "";

        int    Counter = 0;
        int    Counter_Layxe = 0;
        int Counter_Vi_Tri_TB = 0;
        string Day = "";
        string Hour = "";
        string Convert_Data = "";

        string Convert_Index_1 = "";
        string Convert_Index_2 = "";

        string Status_1 = "Chưa thanh toán";
        string Status_2 = "Thanh toán thành công";

        String[] Rfid =    { "732a151a", "8398eb1a", "7346431a", "2aff43b3", "93d28596", "1251691b", "299cc1b", "95ef13ad", "6595bad", "f2aad31a" , "732f851a", "95449fac" };
        String[] Send =    { "vitri1:guixe", "vitri2:guixe", "vitri3:guixe", "vitri4:guixe", "vitri5:guixe", "vitri6:guixe", "vitri7:guixe", "vitri8:guixe", "vitri9:guixe", "vitri10:guixe" , "vitri11:guixe" , "vitri12:guixe" };
        String[] Receive = { "vitri1:layxe", "vitri2:layxe", "vitri3:layxe", "vitri4:layxe", "vitri5:layxe", "vitri6:layxe", "vitri7:layxe", "vitri8:layxe", "vitri9:layxe", "vitri10:layxe", "vitri11:layxe" , "vitri12:layxe" };
       
        string Path_co_xe = "";



        //Nhan du lieu tu Arduino --> PC
        private void COM_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            Data = COM.ReadLine().Trim();

            Day = DateTime.Now.ToString("dd/MM/yyyy");
            Hour = DateTime.Now.ToString("HH:mm:ss ");

            Path_co_xe = @"E:\\test C#\\Link\\Link\\img\\oto.jpg";
            System.Drawing.Image image = System.Drawing.Image.FromFile(Path_co_xe);

            //Data gui xe
            if (Data == Send[0])
            {   
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[0];
                Convert_Index_1 = Send[0];
                pictureBox1.Image = image;
                button4.Text = "Chi Tiết";
                button4.Enabled = true;
            }
            if (Data == Send[1])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[1];
                Convert_Index_1 = Send[1];
                pictureBox2.Image = image;
                button6.Text = "Chi Tiết";
                button6.Enabled = true;
            }
            if (Data == Send[2])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[2];
                Convert_Index_1 = Send[2];
                pictureBox3.Image = image;
                button5.Text = "Chi Tiết";
                button5.Enabled = true;
            }
            if (Data == Send[3])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[3];
                Convert_Index_1 = Send[3];
                pictureBox4.Image = image;
                button7.Text = "Chi Tiết";
                button7.Enabled = true;
            }
            if (Data == Send[4])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[4];
                Convert_Index_1 = Send[4];
                pictureBox5.Image = image;
                button8.Text = "Chi Tiết";
                button8.Enabled = true;
            }
            if (Data == Send[5])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[5];
                Convert_Index_1 = Send[5];
                pictureBox6.Image = image;
                button9.Text = "Chi Tiết";
                button9.Enabled = true;
            }
            if (Data == Send[6])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[6];
                Convert_Index_1 = Send[6];
                pictureBox7.Image = image;
                button10.Text = "Chi Tiết";
                button10.Enabled = true;
            }
            if (Data == Send[7])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[7];
                Convert_Index_1 = Send[7];
                pictureBox8.Image = image;
                button11.Text = "Chi Tiết";
                button11.Enabled = true;
            }
            if (Data == Send[8])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[8];
                Convert_Index_1 = Send[8];
                pictureBox9.Image = image;
                button12.Text = "Chi Tiết";
                button12.Enabled = true;
            }
            if (Data == Send[9])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[9];
                Convert_Index_1 = Send[9];
                pictureBox10.Image = image;
                button13.Text = "Chi Tiết";
                button13.Enabled = true;
            }
            if (Data == Send[10])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[10];
                Convert_Index_1 = Send[10];
                pictureBox11.Image = image;
                button14.Text = "Chi Tiết";
                button14.Enabled = true;
            }
            if (Data == Send[11])
            {
                Counter++;
                Counter_Vi_Tri_TB++;
                Convert_Data = Rfid[11];
                Convert_Index_1 = Send[11];
                pictureBox12.Image = image;
                button15.Text = "Chi Tiết";
                button15.Enabled = true;
            }


            if (Data == Send[0] || Data == Send[1] || Data == Send[2] ||
                Data == Send[3] || Data == Send[4] || Data == Send[5] ||
                Data == Send[6] || Data == Send[7] || Data == Send[8] ||
                Data == Send[9] || Data == Send[10] || Data == Send[11])
            {
                // Sử dụng phương thức Invoke để đảm bảo rằng thao tác giao diện người dùng được thực hiện trên UI thread
                dataGridView1.Invoke(new MethodInvoker(delegate
                {
                    // Tạo một hàng mới cho DataGridView
                    DataGridViewRow row = new DataGridViewRow();
                    row.CreateCells(dataGridView1);
                    // Gán giá trị từ các TextBox vào các ô tương ứng của hàng mới
                    row.Cells[0].Value = Counter;
                    row.Cells[1].Value = Convert_Data;
                    row.Cells[2].Value = Hour;
                    row.Cells[3].Value = Day;
                    row.Cells[4].Value = Convert_Index_1;
                    row.Cells[5].Value = Status_1;
                    dataGridView1.Rows.Add(Counter, Convert_Data, Hour, Day, Convert_Index_1, Status_1);
                }));
            }


            //Data lay xe
            if (Data == Receive[0])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[0];
                Convert_Index_2 = Receive[0];
                button4.Text = "Không có dữ liệu";
                button4.Enabled = false;
                pictureBox1.Image = null;
            }
            if (Data == Receive[1])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[1];
                Convert_Index_2 = Receive[1];
                button6.Text = "Không có dữ liệu";
                button6.Enabled = false;
                pictureBox2.Image = null;
            }
            if (Data == Receive[2])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[2];
                Convert_Index_2 = Receive[2];
                button5.Text = "Không có dữ liệu";
                button5.Enabled = false;
                pictureBox3.Image = null;
            }
            if (Data == Receive[3])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[3];
                Convert_Index_2 = Receive[3];
                button7.Text = "Không có dữ liệu";
                button7.Enabled = false;
                pictureBox4.Image = null;
            }
            if (Data == Receive[4])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[4];
                Convert_Index_2 = Receive[4];
                button8.Text = "Không có dữ liệu";
                button8.Enabled = false;
                pictureBox5.Image = null;
            }
            if (Data == Receive[5])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[5];
                Convert_Index_2 = Receive[5];
                button9.Text = "Không có dữ liệu";
                button9.Enabled = false;
                pictureBox6.Image = null;
            }
            if (Data == Receive[6])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[6];
                Convert_Index_2 = Receive[6];
                button10.Text = "Không có dữ liệu";
                button10.Enabled = false;
                pictureBox7.Image = null;
            }
            if (Data == Receive[7])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[7];
                Convert_Index_2 = Receive[7];
                button11.Text = "Không có dữ liệu";
                button11.Enabled = false;
                pictureBox8.Image = null;
            }
            if (Data == Receive[8])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[8];
                Convert_Index_2 = Receive[8];
                button12.Text = "Không có dữ liệu";
                button12.Enabled = false;
                pictureBox9.Image = null;
            }
            if (Data == Receive[9])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[9];
                Convert_Index_2 = Receive[9];
                button13.Text = "Không có dữ liệu";
                button13.Enabled = false;
                pictureBox10.Image = null;
            }
            if (Data == Receive[10])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[10];
                Convert_Index_2 = Receive[10];
                button14.Text = "Không có dữ liệu";
                button14.Enabled = false;
                pictureBox11.Image = null;
            }
            if (Data == Receive[11])
            {
                Counter_Layxe++;
                Counter_Vi_Tri_TB--;
                Convert_Data = Rfid[11];
                Convert_Index_2 = Receive[11];
                button15.Text = "Không có dữ liệu";
                button15.Enabled = false;
                pictureBox12.Image = null;
            }

            if (Data == Receive[0] || Data == Receive[1] || Data == Receive[2] ||
                Data == Receive[3] || Data == Receive[4] || Data == Receive[5] ||
                Data == Receive[6] || Data == Receive[7] || Data == Receive[8] ||
                Data == Receive[9] || Data == Receive[10] || Data == Receive[11] )
            {
                // Sử dụng phương thức Invoke để đảm bảo rằng thao tác giao diện người dùng được thực hiện trên UI thread
                dataGridView2.Invoke(new MethodInvoker(delegate
                {
                    // Tạo một hàng mới cho DataGridView
                    DataGridViewRow row2 = new DataGridViewRow();
                    row2.CreateCells(dataGridView2);
                    row2.Cells[0].Value = Counter_Layxe;
                    row2.Cells[1].Value = Convert_Data;
                    row2.Cells[2].Value = Hour;
                    row2.Cells[3].Value = Day;
                    row2.Cells[4].Value = Convert_Index_2;
                    row2.Cells[5].Value = Status_2;
                    dataGridView2.Rows.Add(Counter_Layxe, Convert_Data, Hour, Day, Convert_Index_2, Status_2);
                }));
            }

            if (Counter_Vi_Tri_TB > 12)
            {
                Counter_Vi_Tri_TB = 12;
            }
            if (Counter_Vi_Tri_TB < 0)
            {
                Counter_Vi_Tri_TB = 0;
            }

            label15.Text = "Sử Dụng : " + Counter_Vi_Tri_TB + "/12 Vị Trí";

            if(Counter_Vi_Tri_TB > 0 & Counter_Vi_Tri_TB <= 4)
            {
                label16.Text = "Mật Độ   : Thưa Thớt";
                textBox2.BackColor = System.Drawing.Color.Green;
            }
            else if(Counter_Vi_Tri_TB >= 4 & Counter_Vi_Tri_TB <= 8)
            {
                label16.Text = "Mật Độ   : Trung Bình";
                textBox2.BackColor = System.Drawing.Color.Yellow;
            }
            else if(Counter_Vi_Tri_TB >=8 & Counter_Vi_Tri_TB <= 12)
            {
                label16.Text = "Mật Độ   : Dày Đặc";
                textBox2.BackColor = System.Drawing.Color.Red;
            }
            else
            {
                textBox2.BackColor = System.Drawing.Color.White;
                label15.Text = "Sử Dụng : Không Có Xe";
            }

        }

        //Export file Excel gui xe
        private void button1_Click(object sender, EventArgs e)
        {
            //Data gửi xe
            Excel.Application excelApp1 = new Excel.Application();
            excelApp1.Visible = true;


            Excel.Workbook workbook1 = excelApp1.Workbooks.Add();
            Excel.Worksheet worksheet1 = workbook1.ActiveSheet;

            Excel.Range headerRange = worksheet1.Range["A1:F1"];
            headerRange.Font.Size = 10;
            headerRange.Interior.Color = Color.Yellow;
            worksheet1.Cells[1, 4] = "DANH SÁCH GỬI XE";

            worksheet1.Cells[2, 1] = "STT";
            worksheet1.Cells[2, 2] = "Dữ Liệu";
            worksheet1.Cells[2, 3] = "Giờ/Phút/Giây";
            worksheet1.Cells[2, 4] = "Ngày/Tháng/Năm";
            worksheet1.Cells[2, 5] = "Vị Trí";
            worksheet1.Cells[2, 6] = "Trạng Thái";

            for (int i = 0; i < dataGridView1.Rows.Count; i++)
            {
                Excel.Range excelRange = (Excel.Range)worksheet1.Rows[i + 3];
                excelRange.Insert(Excel.XlInsertShiftDirection.xlShiftDown, null);
                for (int j = 0; j < dataGridView1.Columns.Count; j++)
                {
                    worksheet1.Cells[i + 3, j + 1] = dataGridView1.Rows[i].Cells[j].Value;
                }
            }
            Excel.Range range = worksheet1.UsedRange;
            range.HorizontalAlignment = Excel.XlHAlign.xlHAlignCenter;
            range.VerticalAlignment = Excel.XlVAlign.xlVAlignCenter;
        }


        //Export file Excel lay xe
        private void button3_Click(object sender, EventArgs e)
        {
            //Data lấy xe
            Excel.Application excelApp2 = new Excel.Application();
            excelApp2.Visible = true;


            Excel.Workbook workbook2 = excelApp2.Workbooks.Add();
            Excel.Worksheet worksheet2 = workbook2.ActiveSheet;

            Excel.Range headerRange2 = worksheet2.Range["A1:F1"];
            headerRange2.Font.Size = 10;
            headerRange2.Interior.Color = Color.Yellow;
            worksheet2.Cells[1, 4] = "DANH SÁCH LẤY XE";

            worksheet2.Cells[2, 1] = "STT";
            worksheet2.Cells[2, 2] = "Dữ Liệu";
            worksheet2.Cells[2, 3] = "Giờ/Phút/Giây";
            worksheet2.Cells[2, 4] = "Ngày/Tháng/Năm";
            worksheet2.Cells[2, 5] = "Vị Trí";
            worksheet2.Cells[2, 6] = "Trạng Thái";

            for (int i = 0; i < dataGridView2.Rows.Count; i++)
            {
                Excel.Range excelRange2 = (Excel.Range)worksheet2.Rows[i + 3];
                excelRange2.Insert(Excel.XlInsertShiftDirection.xlShiftDown, null);
                for (int j = 0; j < dataGridView2.Columns.Count; j++)
                {
                    worksheet2.Cells[i + 3, j + 1] = dataGridView2.Rows[i].Cells[j].Value;
                }
            }
            Excel.Range range2 = worksheet2.UsedRange;
            range2.HorizontalAlignment = Excel.XlHAlign.xlHAlignCenter;
            range2.VerticalAlignment = Excel.XlVAlign.xlVAlignCenter;
        }

        //check thong tin xe vitri1
        private void button4_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 1\nMã Số Thẻ: 732a151a\nGiờ/Phút/Giây: "+Hour+"\nNgày/Tháng/Năm: "+Day+"\n", "Thông tin xe vị trí 1", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri2
        private void button6_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 2\nMã Số Thẻ: 8398eb1a\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 2", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri3
        private void button5_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 3\nMã Số Thẻ: 7346431a\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 3", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri4
        private void button7_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 4\nMã Số Thẻ: 2aff43b3\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 4", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri5
        private void button8_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 5\nMã Số Thẻ: 93d28596\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 5", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri6
        private void button9_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 6\nMã Số Thẻ: 1251691b\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 6", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri7
        private void button10_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 7\nMã Số Thẻ: 299cc1b\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 7", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri8
        private void button11_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 8\nMã Số Thẻ: 95ef13ad\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 8", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri9
        private void button12_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 9\nMã Số Thẻ: 6595bad\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 9", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri10
        private void button13_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 10\nMã Số Thẻ: f2aad31a\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 10", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri11
        private void button14_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 11\nMã Số Thẻ: 732f851a\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 11", MessageBoxButtons.OK);
        }

        //check thong tin xe vitri12
        private void button15_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Vị Trí: 12\nMã Số Thẻ: 95449fac\nGiờ/Phút/Giây: " + Hour + "\nNgày/Tháng/Năm: " + Day + "\n", "Thông tin xe vị trí 12", MessageBoxButtons.OK);
        }
    }
}
