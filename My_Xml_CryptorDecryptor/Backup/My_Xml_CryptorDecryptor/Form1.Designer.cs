namespace My_Xml_CryptorDecryptor
{
    partial class Form1
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.btnRsaToXML = new System.Windows.Forms.Button();
            this.txtEncryptedText = new System.Windows.Forms.TextBox();
            this.btnLoadRsaXml = new System.Windows.Forms.Button();
            this.btnDecryptData = new System.Windows.Forms.Button();
            this.btnEncrypt = new System.Windows.Forms.Button();
            this.txtYourText = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtBase64 = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnRsaToXML
            // 
            this.btnRsaToXML.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.btnRsaToXML.Dock = System.Windows.Forms.DockStyle.Top;
            this.btnRsaToXML.Location = new System.Drawing.Point(3, 55);
            this.btnRsaToXML.Name = "btnRsaToXML";
            this.btnRsaToXML.Size = new System.Drawing.Size(481, 33);
            this.btnRsaToXML.TabIndex = 1;
            this.btnRsaToXML.Text = "Create XML Keys(Private and Public)";
            this.btnRsaToXML.UseVisualStyleBackColor = true;
            this.btnRsaToXML.Click += new System.EventHandler(this.btnCreatKeys_Click);
            // 
            // txtEncryptedText
            // 
            this.txtEncryptedText.Dock = System.Windows.Forms.DockStyle.Top;
            this.txtEncryptedText.Location = new System.Drawing.Point(0, 83);
            this.txtEncryptedText.Multiline = true;
            this.txtEncryptedText.Name = "txtEncryptedText";
            this.txtEncryptedText.ReadOnly = true;
            this.txtEncryptedText.Size = new System.Drawing.Size(487, 105);
            this.txtEncryptedText.TabIndex = 1;
            this.txtEncryptedText.TabStop = false;
            // 
            // btnLoadRsaXml
            // 
            this.btnLoadRsaXml.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.btnLoadRsaXml.Dock = System.Windows.Forms.DockStyle.Top;
            this.btnLoadRsaXml.Location = new System.Drawing.Point(3, 22);
            this.btnLoadRsaXml.Name = "btnLoadRsaXml";
            this.btnLoadRsaXml.Size = new System.Drawing.Size(481, 33);
            this.btnLoadRsaXml.TabIndex = 0;
            this.btnLoadRsaXml.Text = "Load Keys";
            this.btnLoadRsaXml.UseVisualStyleBackColor = true;
            this.btnLoadRsaXml.Click += new System.EventHandler(this.btnLoadKeys_Click);
            // 
            // btnDecryptData
            // 
            this.btnDecryptData.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.btnDecryptData.Dock = System.Windows.Forms.DockStyle.Top;
            this.btnDecryptData.Location = new System.Drawing.Point(3, 121);
            this.btnDecryptData.Name = "btnDecryptData";
            this.btnDecryptData.Size = new System.Drawing.Size(481, 33);
            this.btnDecryptData.TabIndex = 3;
            this.btnDecryptData.Text = "DecryptData";
            this.btnDecryptData.UseVisualStyleBackColor = true;
            this.btnDecryptData.Click += new System.EventHandler(this.btnDecrypt_Click);
            // 
            // btnEncrypt
            // 
            this.btnEncrypt.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.btnEncrypt.Dock = System.Windows.Forms.DockStyle.Top;
            this.btnEncrypt.Location = new System.Drawing.Point(3, 88);
            this.btnEncrypt.Name = "btnEncrypt";
            this.btnEncrypt.Size = new System.Drawing.Size(481, 33);
            this.btnEncrypt.TabIndex = 2;
            this.btnEncrypt.Text = "EncryptData";
            this.btnEncrypt.UseVisualStyleBackColor = true;
            this.btnEncrypt.Click += new System.EventHandler(this.btnEncrypt_Click);
            // 
            // txtYourText
            // 
            this.txtYourText.Dock = System.Windows.Forms.DockStyle.Top;
            this.txtYourText.Location = new System.Drawing.Point(0, 13);
            this.txtYourText.Multiline = true;
            this.txtYourText.Name = "txtYourText";
            this.txtYourText.Size = new System.Drawing.Size(487, 57);
            this.txtYourText.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Dock = System.Windows.Forms.DockStyle.Top;
            this.label1.Location = new System.Drawing.Point(0, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 13);
            this.label1.TabIndex = 4;
            this.label1.Text = "Your Text";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Dock = System.Windows.Forms.DockStyle.Top;
            this.label2.Location = new System.Drawing.Point(0, 70);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(79, 13);
            this.label2.TabIndex = 5;
            this.label2.Text = "Encrypted Text";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Dock = System.Windows.Forms.DockStyle.Top;
            this.label3.Location = new System.Drawing.Point(0, 188);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(164, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "Encrypted Text in Base-64 format";
            // 
            // txtBase64
            // 
            this.txtBase64.Dock = System.Windows.Forms.DockStyle.Top;
            this.txtBase64.Location = new System.Drawing.Point(0, 201);
            this.txtBase64.Multiline = true;
            this.txtBase64.Name = "txtBase64";
            this.txtBase64.ReadOnly = true;
            this.txtBase64.Size = new System.Drawing.Size(487, 62);
            this.txtBase64.TabIndex = 7;
            this.txtBase64.TabStop = false;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btnDecryptData);
            this.groupBox1.Controls.Add(this.btnEncrypt);
            this.groupBox1.Controls.Add(this.btnRsaToXML);
            this.groupBox1.Controls.Add(this.btnLoadRsaXml);
            this.groupBox1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.groupBox1.Location = new System.Drawing.Point(0, 263);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(487, 159);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Options";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(487, 422);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.txtBase64);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtEncryptedText);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtYourText);
            this.Controls.Add(this.label1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Encryption With RSA";
            this.groupBox1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnRsaToXML;
        private System.Windows.Forms.TextBox txtEncryptedText;
        private System.Windows.Forms.Button btnLoadRsaXml;
        private System.Windows.Forms.Button btnDecryptData;
        private System.Windows.Forms.Button btnEncrypt;
        private System.Windows.Forms.TextBox txtYourText;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtBase64;
        private System.Windows.Forms.GroupBox groupBox1;
    }
}

