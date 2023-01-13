
namespace Games
{
    partial class About_Games
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.cloz = new System.Windows.Forms.Button();
            this.About_Game_Brain_test_info = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // cloz
            // 
            this.cloz.Cursor = System.Windows.Forms.Cursors.Hand;
            this.cloz.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.cloz.Location = new System.Drawing.Point(13, 415);
            this.cloz.Margin = new System.Windows.Forms.Padding(4);
            this.cloz.Name = "cloz";
            this.cloz.Size = new System.Drawing.Size(415, 28);
            this.cloz.TabIndex = 3;
            this.cloz.Text = "Закрыть";
            this.cloz.UseVisualStyleBackColor = true;
            // 
            // About_Game_Brain_test_info
            // 
            this.About_Game_Brain_test_info.Location = new System.Drawing.Point(13, 7);
            this.About_Game_Brain_test_info.Margin = new System.Windows.Forms.Padding(4);
            this.About_Game_Brain_test_info.Multiline = true;
            this.About_Game_Brain_test_info.Name = "About_Game_Brain_test_info";
            this.About_Game_Brain_test_info.ReadOnly = true;
            this.About_Game_Brain_test_info.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.About_Game_Brain_test_info.Size = new System.Drawing.Size(413, 400);
            this.About_Game_Brain_test_info.TabIndex = 2;
            this.About_Game_Brain_test_info.TabStop = false;
            // 
            // About_Games
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(441, 450);
            this.Controls.Add(this.cloz);
            this.Controls.Add(this.About_Game_Brain_test_info);
            this.Name = "About_Games";
            this.Text = "О программе";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button cloz;
        private System.Windows.Forms.TextBox About_Game_Brain_test_info;
    }
}