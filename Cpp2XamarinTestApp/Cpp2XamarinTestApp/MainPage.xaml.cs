using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

using System.IO;
using System.Reflection;
//using System.Threading;


namespace Cpp2XamarinTestApp
{
    public partial class MainPage : ContentPage
    {
        Cpp2XamarinTest.Cpp2XamarinTest myCpp2XamarinTest = null;
        public MainPage()
        {
            InitializeComponent();
        }

        void OnButtonClicked(object sender, EventArgs e)
        {
            int sum = myCpp2XamarinTest.CalcSum(1, 2);
            (sender as Button).Text = "Sum: " + sum;
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();
            myCpp2XamarinTest = new Cpp2XamarinTest.Cpp2XamarinTest();
        }

        protected override void OnDisappearing()
        {
            base.OnDisappearing();
            myCpp2XamarinTest.Dispose();
        }
    }
}
