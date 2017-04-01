using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using NetSIMD;

namespace NetSIMDDetector
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            SIMD_Detector det = new SIMD_Detector();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));

            Text = det.CPUModel;

            if (det.MMX)
                pbMMX.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE)
                pbSSE.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE2)
                pbSSE2.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE3)
                pbSSE3.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSSE3)
                pbSSSE3.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE41)
                pbSSE41.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE42)
                pbSSE42.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.AES)
                pbAES.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.AVX)
                pbAVX.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE5)
                pbSSE5.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.SSE4a)
                pbSSE4a.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.ThreeDnow)
                pb3DNowplus.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.ThreeDnowExt)
                pb3DNow.Image = ((System.Drawing.Image)(resources.GetObject("Tick")));
            if (det.MMXplus)
                pbMMXplus.Image = ((System.Drawing.Image)(resources.GetObject("Tick"))); 

        }

        private void btnOk_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}