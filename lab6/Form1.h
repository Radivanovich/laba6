#pragma once

namespace lab6 {

	using namespace System;
        using namespace System::ComponentModel;
        using namespace System::Collections;
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;

        /// <summary>
        /// Summary for Form1
        /// </summary>
        public ref class Form1 : public System::Windows::Forms::Form
        {
        public:
                Form1(void)
                {
                        InitializeComponent();
                        //
                        //TODO: Add the constructor code here
                        //
                }

        protected:
                /// <summary>
                /// Clean up any resources being used.
                /// </summary>
                ~Form1()
                {
                        if (components)
                        {
                                delete components;
                        }
                }
		private: System::Windows::Forms::TextBox^  in_dimention;
		private: System::Windows::Forms::Label^  for_dimention;
		protected: 

        protected: 

		private: System::Windows::Forms::Button^  okey;
		private: System::Windows::Forms::Label^  Y_inform;



		private: System::Windows::Forms::Label^  for_value;


		private: System::Windows::Forms::Label^  for_result;

		private: System::Windows::Forms::Button^  cancel;


        private: System::Windows::Forms::Label^  for_inform;
		private: System::Windows::Forms::TextBox^  in_inform;

		private: System::Windows::Forms::Button^  get_answer;
		private: System::Windows::Forms::Label^  out_inform;
		private: System::Windows::Forms::Label^  out_value;



		private: System::Windows::Forms::Label^  out_result;
		private: System::Windows::Forms::TableLayoutPanel^  for_form;









        private:
                /// <summary>
                /// Required designer variable.
                /// </summary>
                System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
                /// <summary>
                /// Required method for Designer support - do not modify
                /// the contents of this method with the code editor.
                /// </summary>
                void InitializeComponent(void)
                {
					this->in_dimention = (gcnew System::Windows::Forms::TextBox());
					this->for_dimention = (gcnew System::Windows::Forms::Label());
					this->okey = (gcnew System::Windows::Forms::Button());
					this->Y_inform = (gcnew System::Windows::Forms::Label());
					this->for_value = (gcnew System::Windows::Forms::Label());
					this->for_result = (gcnew System::Windows::Forms::Label());
					this->cancel = (gcnew System::Windows::Forms::Button());
					this->for_inform = (gcnew System::Windows::Forms::Label());
					this->in_inform = (gcnew System::Windows::Forms::TextBox());
					this->get_answer = (gcnew System::Windows::Forms::Button());
					this->out_inform = (gcnew System::Windows::Forms::Label());
					this->out_value = (gcnew System::Windows::Forms::Label());
					this->out_result = (gcnew System::Windows::Forms::Label());
					this->for_form = (gcnew System::Windows::Forms::TableLayoutPanel());
					this->for_form->SuspendLayout();
					this->SuspendLayout();
					// 
					// in_dimention
					// 
					this->in_dimention->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->in_dimention->Location = System::Drawing::Point(21, 32);
					this->in_dimention->Margin = System::Windows::Forms::Padding(15, 5, 3, 3);
					this->in_dimention->Name = L"in_dimention";
					this->in_dimention->Size = System::Drawing::Size(85, 20);
					this->in_dimention->TabIndex = 0;
					this->in_dimention->TextChanged += gcnew System::EventHandler(this, &Form1::in_dimention_TextChanged);
					// 
					// for_dimention
					// 
					this->for_dimention->Anchor = System::Windows::Forms::AnchorStyles::None;
					this->for_dimention->AutoSize = true;
					this->for_dimention->ForeColor = System::Drawing::SystemColors::InfoText;
					this->for_dimention->Location = System::Drawing::Point(7, 7);
					this->for_dimention->Margin = System::Windows::Forms::Padding(0);
					this->for_dimention->Name = L"for_dimention";
					this->for_dimention->Size = System::Drawing::Size(101, 13);
					this->for_dimention->TabIndex = 1;
					this->for_dimention->Text = L"Number of elements";
					this->for_dimention->Click += gcnew System::EventHandler(this, &Form1::for_dimention_Click);
					// 
					// okey
					// 
					this->okey->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->okey->ForeColor = System::Drawing::SystemColors::InfoText;
					this->okey->Location = System::Drawing::Point(307, 30);
					this->okey->Name = L"okey";
					this->okey->Size = System::Drawing::Size(75, 22);
					this->okey->TabIndex = 2;
					this->okey->Text = L"Okey";
					this->okey->UseVisualStyleBackColor = true;
					this->okey->Click += gcnew System::EventHandler(this, &Form1::okey_Click);
					// 
					// Y_inform
					// 
					this->Y_inform->Anchor = System::Windows::Forms::AnchorStyles::None;
					this->Y_inform->AutoSize = true;
					this->Y_inform->ForeColor = System::Drawing::SystemColors::Desktop;
					this->Y_inform->Location = System::Drawing::Point(151, 76);
					this->Y_inform->Name = L"Y_inform";
					this->Y_inform->Size = System::Drawing::Size(86, 13);
					this->Y_inform->TabIndex = 4;
					this->Y_inform->Text = L"Your information:";
					this->Y_inform->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
					// 
					// for_value
					// 
					this->for_value->Anchor = System::Windows::Forms::AnchorStyles::None;
					this->for_value->AutoSize = true;
					this->for_value->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->for_value->Location = System::Drawing::Point(17, 76);
					this->for_value->Name = L"for_value";
					this->for_value->Size = System::Drawing::Size(80, 13);
					this->for_value->TabIndex = 6;
					this->for_value->Text = L"Min/max value:";
					// 
					// for_result
					// 
					this->for_result->Anchor = System::Windows::Forms::AnchorStyles::None;
					this->for_result->AutoSize = true;
					this->for_result->ForeColor = System::Drawing::SystemColors::MenuHighlight;
					this->for_result->Location = System::Drawing::Point(324, 76);
					this->for_result->Name = L"for_result";
					this->for_result->Size = System::Drawing::Size(40, 13);
					this->for_result->TabIndex = 7;
					this->for_result->Text = L"Result:";
					// 
					// cancel
					// 
					this->cancel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
					this->cancel->AutoSize = true;
					this->cancel->BackColor = System::Drawing::SystemColors::Desktop;
					this->cancel->ForeColor = System::Drawing::SystemColors::Info;
					this->cancel->Location = System::Drawing::Point(447, 253);
					this->cancel->MaximumSize = System::Drawing::Size(100, 40);
					this->cancel->MinimumSize = System::Drawing::Size(50, 20);
					this->cancel->Name = L"cancel";
					this->cancel->Size = System::Drawing::Size(64, 23);
					this->cancel->TabIndex = 9;
					this->cancel->Text = L"Cancel";
					this->cancel->UseVisualStyleBackColor = false;
					this->cancel->Click += gcnew System::EventHandler(this, &Form1::cancel_Click);
					// 
					// for_inform
					// 
					this->for_inform->Anchor = System::Windows::Forms::AnchorStyles::None;
					this->for_inform->AutoSize = true;
					this->for_inform->ForeColor = System::Drawing::SystemColors::InfoText;
					this->for_inform->Location = System::Drawing::Point(130, 7);
					this->for_inform->Name = L"for_inform";
					this->for_inform->Size = System::Drawing::Size(128, 13);
					this->for_inform->TabIndex = 10;
					this->for_inform->Text = L"Information for processing";
					this->for_inform->Click += gcnew System::EventHandler(this, &Form1::for_inform_Click);
					// 
					// in_inform
					// 
					this->in_inform->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->in_inform->Location = System::Drawing::Point(120, 30);
					this->in_inform->Name = L"in_inform";
					this->in_inform->Size = System::Drawing::Size(149, 20);
					this->in_inform->TabIndex = 11;
					this->in_inform->TextChanged += gcnew System::EventHandler(this, &Form1::in_inform_TextChanged);
					// 
					// get_answer
					// 
					this->get_answer->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->get_answer->ForeColor = System::Drawing::SystemColors::InfoText;
					this->get_answer->Location = System::Drawing::Point(436, 30);
					this->get_answer->Name = L"get_answer";
					this->get_answer->Size = System::Drawing::Size(86, 22);
					this->get_answer->TabIndex = 12;
					this->get_answer->Text = L"Get answer";
					this->get_answer->UseVisualStyleBackColor = true;
					this->get_answer->Click += gcnew System::EventHandler(this, &Form1::get_answer_Click);
					// 
					// out_inform
					// 
					this->out_inform->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->out_inform->BackColor = System::Drawing::SystemColors::Info;
					this->out_inform->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					this->out_inform->Location = System::Drawing::Point(118, 110);
					this->out_inform->Name = L"out_inform";
					this->out_inform->Size = System::Drawing::Size(153, 70);
					this->out_inform->TabIndex = 13;
					this->out_inform->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					this->out_inform->Click += gcnew System::EventHandler(this, &Form1::out_inform_Click);
					// 
					// out_value
					// 
					this->out_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->out_value->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					this->out_value->Location = System::Drawing::Point(3, 110);
					this->out_value->Name = L"out_value";
					this->out_value->Size = System::Drawing::Size(109, 32);
					this->out_value->TabIndex = 14;
					this->out_value->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					// 
					// out_result
					// 
					this->out_result->Anchor = System::Windows::Forms::AnchorStyles::Top;
					this->out_result->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
					this->out_result->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					this->out_result->ForeColor = System::Drawing::SystemColors::MenuText;
					this->out_result->Location = System::Drawing::Point(283, 110);
					this->out_result->Name = L"out_result";
					this->out_result->Size = System::Drawing::Size(122, 24);
					this->out_result->TabIndex = 15;
					this->out_result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					// 
					// for_form
					// 
					this->for_form->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
						| System::Windows::Forms::AnchorStyles::Left) 
						| System::Windows::Forms::AnchorStyles::Right));
					this->for_form->AutoSize = true;
					this->for_form->ColumnCount = 4;
					this->for_form->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 41.92825F)));
					this->for_form->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 58.07175F)));
					this->for_form->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 141)));
					this->for_form->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 127)));
					this->for_form->Controls->Add(this->cancel, 3, 3);
					this->for_form->Controls->Add(this->out_result, 2, 3);
					this->for_form->Controls->Add(this->for_result, 2, 2);
					this->for_form->Controls->Add(this->out_value, 0, 3);
					this->for_form->Controls->Add(this->in_dimention, 0, 1);
					this->for_form->Controls->Add(this->out_inform, 1, 3);
					this->for_form->Controls->Add(this->for_value, 0, 2);
					this->for_form->Controls->Add(this->get_answer, 3, 1);
					this->for_form->Controls->Add(this->in_inform, 1, 1);
					this->for_form->Controls->Add(this->Y_inform, 1, 2);
					this->for_form->Controls->Add(this->okey, 2, 1);
					this->for_form->Controls->Add(this->for_inform, 1, 0);
					this->for_form->Controls->Add(this->for_dimention, 0, 0);
					this->for_form->Location = System::Drawing::Point(1, 2);
					this->for_form->Name = L"for_form";
					this->for_form->RowCount = 4;
					this->for_form->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.39759F)));
					this->for_form->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.60241F)));
					this->for_form->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 55)));
					this->for_form->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 168)));
					this->for_form->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
					this->for_form->Size = System::Drawing::Size(543, 279);
					this->for_form->TabIndex = 17;
					this->for_form->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::for_form_Paint);
					// 
					// Form1
					// 
					this->AcceptButton = this->okey;
					this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->BackColor = System::Drawing::SystemColors::Info;
					this->ClientSize = System::Drawing::Size(544, 281);
					this->Controls->Add(this->for_form);
					this->ForeColor = System::Drawing::SystemColors::WindowFrame;
					this->MaximumSize = System::Drawing::Size(750, 450);
					this->MinimumSize = System::Drawing::Size(560, 320);
					this->Name = L"Form1";
					this->Text = L"search product";
					this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
					this->for_form->ResumeLayout(false);
					this->for_form->PerformLayout();
					this->ResumeLayout(false);
					this->PerformLayout();

				}


#pragma endregion
        private:
                static int dim; //размерность массива
                static int e1=0;
                static array<int>^ A = gcnew array<int>(50);
private: System::Void for_dimention_Click(System::Object^  sender, System::EventArgs^  e) {
                         }
private: System::Void okey_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		array<String^>^ as;
		array<Char>^ ar;
		ar=gcnew array<Char> (1);
		ar[0]=' ';
		if ((in_inform->Text->Length!=0)&&(in_dimention->Text->Length!=0))
		{
			dim=Convert::ToInt32(in_dimention->Text);
			as=in_inform->Text->Split(ar);// разденение строки на элементы по пробелам
            for(int i=0;i<dim;i++)
			{
				A[i]=Convert::ToInt32(as[e1]);// захерачиваем в массив элементы
				e1++;
			}
			
            in_inform->Clear();
			
			for(int i=0;i<dim;i++)
				out_inform->Text+=System::Convert::ToString(A[i])+" ";
			this->AcceptButton = get_answer;// переносим кнопку enter на cancel 
		}
		else
			for_dimention->Text="Please enter all values right";
		
	};
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
             Application::cancel();
         }
private: System::Void in_dimention_TextChanged(System::Object^  sender, System::EventArgs^  e) {
                 }
private: System::Void get_answer_Click(System::Object^  sender, System::EventArgs^  e) 
	{
        int max=A[0];
        int min=A[0];
        int ind_min, ind_max;
        for(int i=0;i<Convert::ToInt32(in_dimention->Text);i++)
			if(max<A[i])
            {
				max=A[i];
                ind_max=i;
            }
        for(int i=0;i<Convert::ToInt32(in_dimention->Text);i++)
			if(min>A[i])
            {
				min=A[i];
                ind_min=i;
            }
        out_value->Text="min: "+System::Convert::ToString(min)+Environment::NewLine+"max: "+System::Convert::ToString(max);
        int answer=1;// будущий ответный ответ
        if(ind_min>ind_max)
			for(int i=ind_max+1;i<ind_min;i--)
				answer*=A[i];
		else
			for(int i=ind_min+1;i<ind_max;i++)
				answer*=A[i];
		out_result->Text=System::Convert::ToString(answer);
		
    };
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
                 }
private: System::Void in_inform_TextChanged(System::Object^  sender, System::EventArgs^  e) {
                 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Y_inform_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void for_inform_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void out_inform_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}


