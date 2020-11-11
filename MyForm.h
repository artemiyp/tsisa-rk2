#pragma once

namespace Lab4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading; //Для Sleep
	using namespace System::IO; //StreamWriter

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart;
	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(12, 37);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(392, 374);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(189, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пуск!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(411, 38);
			this->chart->Name = L"chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Лучший";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Средний";
			series2->Name = L"Series2";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(536, 373);
			this->chart->TabIndex = 2;
			this->chart->Text = L"chart1";
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(284, 9);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(13, 13);
			this->labelResult->TabIndex = 3;
			this->labelResult->Text = L"\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Итераций";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10", L"20", L"50", L"100" });
			this->comboBox1->Location = System::Drawing::Point(91, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(80, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 434);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox);
			this->Name = L"MyForm";
			this->Text = L"Генетические алгоритмы";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Фитнес - функция
		static double F(double x, double y)
		{
			return Math::Cos(x)*Math::Cos(y)*Math::Exp(-x*x - y*y);
		}

		//Описание организма
		ref class Organizm
		{
			static Random^ random = gcnew Random();
		public:
			static const double MinX = -2;
			static const double MaxX = +2;
			static const double MinY = -2;
			static const double MaxY = +2;
		private:
			double h = 1E-1; //Величина мутации
		public:
			double x;
			double y;
			double Fitness;
			Organizm(double x, double y)
			{
				this->x = x;
				this->y = y;
				Fitness = F(x, y);
			}
			//Мутация
			void Mutate()
			{
				double X = x, Y = y;
				do
				{
					x = X + h*(2 * random->NextDouble() - 1);
					y = Y + h*(2 * random->NextDouble() - 1);
				} while //Исключить недопустимые значения вне диапазона:
					(
						x < MinX ||
						x > MaxX ||
						y < MinY ||
						y > MaxY
						);
				Fitness = F(x, y);
			}
		};

		//Скрещивание
		//Скрещивание в действительных числах == усреднению
		Organizm^ Cross(Organizm^ O1, Organizm^ O2)
		{
			return gcnew Organizm((O1->x + O2->x) / 2, (O1->y + O2->y) / 2);
		}

		Random^ random = gcnew Random();

		const int NO = 4; //Такой размер популяции
		const int NC = 2; //Количество потомков
		array<Organizm^>^ Population = nullptr;
		

		//Сортировка популяции, максимум в начало массива
		void Sort()
		{
			int N = Population->Length;
			for (int k = 0; k < N - 1; k++)
			{
				int found = k;
				for (int i = k + 1; i < N; i++)
					if (Population[i]->Fitness > Population[found]->Fitness)
						found = i;
				if (found != k)
				{
					Organizm^ temp = Population[found];
					Population[found] = Population[k];
					Population[k] = temp;
				}
			}
		}

		//Среднее значение первых NO
		double Middle()
		{
			double result = 0;
			for (int i = 0; i < NO; i++)
				result += Population[i]->Fitness;
			result /= NO;
			return result;
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		button1->Enabled = false;
		int Times = int::Parse(comboBox1->Text); //Столько поколений
		Population = gcnew array<Organizm^>(NO + NC);
		//Создать заданное количество организмов
		for (int k = 0; k < NO + NC; k++)
		{
			double newX = Organizm::MinX + random->NextDouble() * (Organizm::MaxX - Organizm::MinX);
			double newY = Organizm::MinY + random->NextDouble() * (Organizm::MaxY - Organizm::MinY);
			Population[k] = gcnew Organizm(newX,newY);
		}

		//Подготовить chart
		chart->Series[0]->Points->Clear();
		chart->Series[1]->Points->Clear();
		//Подготовить pictureBox
		//Приготовить файл для вывода
		StreamWriter^ writer = gcnew StreamWriter("result.txt");
		writer->WriteLine("N\tX\tY\tFit\tMax\tMidlle");

		//Заданное количество раз
		for (int t = 1; t < Times; t++)
		{
			//Узнать лучшего
			Sort();
			//Вывести
			chart->Series[0]->Points->AddXY(t, Population[0]->Fitness);
			chart->Series[1]->Points->AddXY(t, Middle());
			pictureBox->Refresh();

			//Вывести результат в файл
			for (int w = 0; w < NO; w++)
			{
				//"N\tX\tY\tFit\tMax\tMidlle"
				//Каждый огранизм
				if (w == 0)
					writer->Write(t.ToString()+"\t");
				else
					writer->Write("\t");
				writer->Write(Population[w]->x.ToString("0.000")+"\t");
				writer->Write(Population[w]->y.ToString("0.000") + "\t");
				writer->Write(Population[w]->Fitness.ToString("0.000") + "\t");
				//Статистику
				if (w == 0)
				{
					writer->Write(Population[0]->Fitness.ToString("0.000") + "\t");
					writer->Write(Middle().ToString("0.000"));
				}
				else
					writer->Write("\t\t");

				writer->WriteLine();

			}

			Thread::Sleep(5000 / Times);
			//Прозвести скрещивание
			Population[NO + NC - 1] = Cross(Population[0], Population[1]);
			Population[NO + NC - 2] = Cross(Population[0], Population[2]);
			//И мутации
			if (random->NextDouble()<0.4) //Вероятность 40%
				Population[NO + NC - 1]->Mutate();
			if (random->NextDouble()<0.4) //Вероятность 40%
				Population[NO + NC - 2]->Mutate();
		}
		labelResult->Text = "X = " + Population[0]->x.ToString("0.000") +
			" Y = " + Population[0]->y.ToString("0.000") +
			" F(x,y) = " + Population[0]->Fitness.ToString("0.000");
		writer->Close();
		button1->Enabled = true;
	}
			 //Нарисовать
	private: System::Void pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
	{
		if (Population == nullptr) return;
		e->Graphics->Clear(Color::White);

		double ScaleX = pictureBox->Width / (Organizm::MaxX - Organizm::MinX);
		double ScaleY = pictureBox->Height / (Organizm::MaxY - Organizm::MinY);
		double Scale = Math::Min(ScaleX, ScaleY);

		Pen^ pen = gcnew Pen(Color::Black, 2);


		e->Graphics->DrawLine(pen,0, -Organizm::MinY*Scale, pictureBox->Width, -Organizm::MinY*Scale);
		e->Graphics->DrawLine(pen, -Organizm::MinX*Scale, 0, -Organizm::MinX*Scale, pictureBox->Height);

		for (int k = 0; k < NO; k++)
		{
			Brush^ brush = System::Drawing::Brushes::Green;
			if (k==0)brush = System::Drawing::Brushes::Red;

			e->Graphics->FillEllipse(brush,
				(float)((Population[k]->x - Organizm::MinX) * Scale - 2),
				(float)((Population[k]->y - Organizm::MinY) * Scale - 2),
				5.0f, 5.0f);
		}
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->SelectedIndex = 1;
}
};
}
