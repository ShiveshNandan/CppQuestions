namespace PRACTICAL1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "You have clicked SET";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label1.Text = "You have clicked CANCEL";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            label1.Text = "Form Submitted";
            Form2 LoginForm = new Form2();
            LoginForm.ShowDialog();
        }
    }
}
