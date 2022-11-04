#pragma once
#include <iostream>
#include "Pokemon.h"
#include <algorithm>

#define MAX_LEN 100

namespace Lab6MatthewJuarez1184522 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			misPokemon = gcnew array<Pokemon^>(array_size);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LblPokedex;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ComboBox^ CmbElementos;
	private: System::Windows::Forms::TextBox^ TxtElementos;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LblPokedex = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->CmbElementos = (gcnew System::Windows::Forms::ComboBox());
			this->TxtElementos = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// LblPokedex
			// 
			this->LblPokedex->AutoSize = true;
			this->LblPokedex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblPokedex->Location = System::Drawing::Point(345, 56);
			this->LblPokedex->Name = L"LblPokedex";
			this->LblPokedex->Size = System::Drawing::Size(158, 32);
			this->LblPokedex->TabIndex = 0;
			this->LblPokedex->Text = L"POKEDEX";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(294, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar y cargar archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(457, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ordenar por National number";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Location = System::Drawing::Point(65, 200);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(294, 312);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 22;
			this->listBox2->Location = System::Drawing::Point(461, 254);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(294, 312);
			this->listBox2->TabIndex = 4;
			// 
			// CmbElementos
			// 
			this->CmbElementos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CmbElementos->FormattingEnabled = true;
			this->CmbElementos->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Selection Sort", L"Quick Sort", L"Shell Sort" });
			this->CmbElementos->Location = System::Drawing::Point(461, 181);
			this->CmbElementos->Name = L"CmbElementos";
			this->CmbElementos->Size = System::Drawing::Size(266, 30);
			this->CmbElementos->TabIndex = 5;
			this->CmbElementos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CmbElementos_SelectedIndexChanged);
			// 
			// TxtElementos
			// 
			this->TxtElementos->Enabled = false;
			this->TxtElementos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtElementos->Location = System::Drawing::Point(65, 581);
			this->TxtElementos->Multiline = true;
			this->TxtElementos->Name = L"TxtElementos";
			this->TxtElementos->Size = System::Drawing::Size(294, 311);
			this->TxtElementos->TabIndex = 6;
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 983);
			this->Controls->Add(this->TxtElementos);
			this->Controls->Add(this->CmbElementos);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LblPokedex);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		array<Pokemon^>^ misPokemon;
		int array_size = 90;
		int pokemonQ = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog2->ShowDialog()) {
			StreamReader^ inputStream = gcnew StreamReader(openFileDialog2->FileName);
			if (inputStream != nullptr) {
				String^ linea = inputStream->ReadLine();
				while (linea && (pokemonQ < array_size)) {

					array<String^>^ datos = linea->Split(',');
					Pokemon^ miPokemon = gcnew Pokemon();
					miPokemon->setNumber(datos[0]);
					miPokemon->setName(datos[1]);
					miPokemon->setGeneration(datos[2]);

					misPokemon[pokemonQ] = miPokemon;

					linea = inputStream->ReadLine();
					pokemonQ++;
				}
			}
			inputStream->Close();

			for (int i = 0;i < pokemonQ; i++) {
				listBox1->Items->Add(misPokemon[i]->getNumber());
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	void swap(int* a, int* b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

private: System::Void CmbElementos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	listBox2->Items->Clear();
	if (CmbElementos->SelectedIndex == 0) {
		for (int i = 0; i < pokemonQ; i++) {
			for (int j = 0; j < pokemonQ; j++) {

				if (Convert::ToInt16(misPokemon[i]->getNumber()) < Convert::ToInt16(misPokemon[j]->getNumber())) {
					int temp = Convert::ToInt16(misPokemon[j]->getNumber());
					String^ nombre = misPokemon[j]->getName();
					int gen = Convert::ToInt16(misPokemon[j]->getGeneration());
					misPokemon[j]->setNumber(misPokemon[i]->getNumber());
					misPokemon[j]->setName(misPokemon[i]->getName());
					misPokemon[j]->setGeneration(misPokemon[i]->getGeneration());
					misPokemon[i]->setNumber(Convert::ToString(temp));
					misPokemon[i]->setName(nombre);
					misPokemon[i]->setGeneration(Convert::ToString(gen));
				}
			}
		}
		for (int i = 0;i < pokemonQ;i++) {
			listBox2->Items->Add(misPokemon[i]->getNumber() + "," + misPokemon[i]->getName() + "," + misPokemon[i]->getGeneration());
			listBox1->Items->Add(misPokemon[i]->getNumber());
		}
	}
	if (CmbElementos->SelectedIndex == 1) {
		for (int i = 0; i < pokemonQ; i++) {
			for (int j = 0; j < pokemonQ; j++) {

				if (Convert::ToInt16(misPokemon[i]->getNumber()) < Convert::ToInt16(misPokemon[j]->getNumber())) {
					int temp = Convert::ToInt16(misPokemon[j]->getNumber());
					String^ nombre = misPokemon[j]->getName();
					int gen = Convert::ToInt16(misPokemon[j]->getGeneration());
					misPokemon[j]->setNumber(misPokemon[i]->getNumber());
					misPokemon[j]->setName(misPokemon[i]->getName());
					misPokemon[j]->setGeneration(misPokemon[i]->getGeneration());
					misPokemon[i]->setNumber(Convert::ToString(temp));
					misPokemon[i]->setName(nombre);
					misPokemon[i]->setGeneration(Convert::ToString(gen));
				}
			}
		}

		for (int i = 0;i < pokemonQ;i++) {
			listBox2->Items->Add(misPokemon[i]->getNumber() + "," + misPokemon[i]->getName() + "," + misPokemon[i]->getGeneration());
			listBox1->Items->Add(misPokemon[i]->getNumber());
		}
	}
	if (CmbElementos->SelectedIndex == 2) {
		for (int i = 0; i < pokemonQ; i++) {
			for (int j = 0; j < pokemonQ; j++) {

				if (Convert::ToInt16(misPokemon[i]->getNumber()) < Convert::ToInt16(misPokemon[j]->getNumber())) {
					int temp = Convert::ToInt16(misPokemon[j]->getNumber());
					String^ nombre = misPokemon[j]->getName();
					int gen = Convert::ToInt16(misPokemon[j]->getGeneration());
					misPokemon[j]->setNumber(misPokemon[i]->getNumber());
					misPokemon[j]->setName(misPokemon[i]->getName());
					misPokemon[j]->setGeneration(misPokemon[i]->getGeneration());
					misPokemon[i]->setNumber(Convert::ToString(temp));
					misPokemon[i]->setName(nombre);
					misPokemon[i]->setGeneration(Convert::ToString(gen));
				}
			}
		}
		for (int i = 0;i < pokemonQ;i++) {
			listBox2->Items->Add(misPokemon[i]->getNumber() + "," + misPokemon[i]->getName() + "," + misPokemon[i]->getGeneration());
			listBox1->Items->Add(misPokemon[i]->getNumber());
		}
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex >= 0) {
		String^ pokeInfo = "Numero Nacional: " + misPokemon[listBox1->SelectedIndex]->getNumber() + "\r\n"
			+ "Nombre: " + misPokemon[listBox1->SelectedIndex]->getName() + "\r\n"
			+ "Generacion: " + misPokemon[listBox1->SelectedIndex]->getGeneration();

		TxtElementos->Text = pokeInfo;
	}
}
};
}