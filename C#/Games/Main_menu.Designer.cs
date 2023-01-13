
namespace Games
{
    partial class Main_menu
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.list = new System.Windows.Forms.Button();
            this.label_menu = new System.Windows.Forms.Label();
            this.button_test = new System.Windows.Forms.Button();
            this.button_C_Z = new System.Windows.Forms.Button();
            this.button_exit = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // list
            // 
            this.list.Location = new System.Drawing.Point(12, 12);
            this.list.Name = "list";
            this.list.Size = new System.Drawing.Size(83, 26);
            this.list.TabIndex = 0;
            this.list.Text = "Справка";
            this.list.UseVisualStyleBackColor = true;
            this.list.Click += new System.EventHandler(this.list_Click);
            // 
            // label_menu
            // 
            this.label_menu.AutoSize = true;
            this.label_menu.Font = new System.Drawing.Font("Microsoft Sans Serif", 19.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_menu.Location = new System.Drawing.Point(152, 69);
            this.label_menu.Name = "label_menu";
            this.label_menu.Size = new System.Drawing.Size(239, 38);
            this.label_menu.TabIndex = 1;
            this.label_menu.Text = "Главное меню";
            // 
            // button_test
            // 
            this.button_test.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_test.Location = new System.Drawing.Point(159, 120);
            this.button_test.Name = "button_test";
            this.button_test.Size = new System.Drawing.Size(232, 60);
            this.button_test.TabIndex = 2;
            this.button_test.Text = "Тест на память";
            this.button_test.UseVisualStyleBackColor = true;
            this.button_test.Click += new System.EventHandler(this.button_test_Click);
            // 
            // button_C_Z
            // 
            this.button_C_Z.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_C_Z.Location = new System.Drawing.Point(159, 186);
            this.button_C_Z.Name = "button_C_Z";
            this.button_C_Z.Size = new System.Drawing.Size(232, 60);
            this.button_C_Z.TabIndex = 4;
            this.button_C_Z.Text = "Крестики-нолики";
            this.button_C_Z.UseVisualStyleBackColor = true;
            this.button_C_Z.Click += new System.EventHandler(this.button_C_Z_Click);
            // 
            // button_exit
            // 
            this.button_exit.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_exit.Location = new System.Drawing.Point(159, 252);
            this.button_exit.Name = "button_exit";
            this.button_exit.Size = new System.Drawing.Size(232, 68);
            this.button_exit.TabIndex = 6;
            this.button_exit.Text = "Выход из программы";
            this.button_exit.UseVisualStyleBackColor = true;
            this.button_exit.Click += new System.EventHandler(this.button_exit_Click);
            // 
            // Main_menu
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(571, 338);
            this.Controls.Add(this.button_exit);
            this.Controls.Add(this.button_C_Z);
            this.Controls.Add(this.button_test);
            this.Controls.Add(this.label_menu);
            this.Controls.Add(this.list);
            this.Name = "Main_menu";
            this.Text = "Сборник мини-игр";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button list;
        private System.Windows.Forms.Label label_menu;
        private System.Windows.Forms.Button button_test;
        private System.Windows.Forms.Button button_C_Z;
        private System.Windows.Forms.Button button_exit;
    }
}

