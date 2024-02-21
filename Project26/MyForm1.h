#pragma once
#include <cctype>
#include <regex>
#include <msclr\marshal_cppstd.h>
#include<string>
#include<iostream>

using namespace std;
using namespace System;
using namespace msclr::interop;

namespace Project26 {

	using namespace System;
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
			//
			//TODO: agregar código de constructor aquí
			//
		}
		bool txt1Valido = true;
		bool txt2Valido = true;
		bool txt3Valido = true;
		bool txt4Valido = true;
		bool txt5Valido = true;
		bool txt6Valido = true;
	private: System::Windows::Forms::Button^ Boton_Mostrar;
	public:
	public:
	public:
		bool txt7Valido = true;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Button^ Nuevo_Datos;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ textBox50;
	private: System::Windows::Forms::TextBox^ textBox51;
	private: System::Windows::Forms::TextBox^ textBox52;
	private: System::Windows::Forms::TextBox^ textBox53;
	private: System::Windows::Forms::TextBox^ textBox54;
	private: System::Windows::Forms::TextBox^ textBox55;
	private: System::Windows::Forms::TextBox^ textBox56;
	private: System::Windows::Forms::TextBox^ textBox57;
	private: System::Windows::Forms::TextBox^ textBox58;
	private: System::Windows::Forms::TextBox^ textBox59;
	private: System::Windows::Forms::TextBox^ textBox60;
	private: System::Windows::Forms::TextBox^ textBox61;
	private: System::Windows::Forms::TextBox^ textBox62;
	private: System::Windows::Forms::TextBox^ textBox63;
	private: System::Windows::Forms::TextBox^ textBox64;
	private: System::Windows::Forms::TextBox^ textBox65;
	private: System::Windows::Forms::TextBox^ textBox66;
	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::TextBox^ textBox68;
	private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::TextBox^ textBox70;
	private: System::Windows::Forms::TextBox^ textBox71;
	private: System::Windows::Forms::TextBox^ textBox72;
	private: System::Windows::Forms::TextBox^ textBox73;
	private: System::Windows::Forms::TextBox^ textBox74;
	private: System::Windows::Forms::TextBox^ textBox75;
	private: System::Windows::Forms::TextBox^ textBox76;
	private: System::Windows::Forms::TextBox^ textBox77;
	private: System::Windows::Forms::TextBox^ textBox78;
	private: System::Windows::Forms::TextBox^ textBox79;
	private: System::Windows::Forms::TextBox^ textBox80;
	private: System::Windows::Forms::TextBox^ textBox81;
	private: System::Windows::Forms::TextBox^ textBox82;
	private: System::Windows::Forms::TextBox^ textBox83;
	private: System::Windows::Forms::TextBox^ textBox84;
	private: System::Windows::Forms::TextBox^ textBox85;
	private: System::Windows::Forms::TextBox^ textBox86;
	private: System::Windows::Forms::TextBox^ textBox87;
	private: System::Windows::Forms::TextBox^ textBox88;
	private: System::Windows::Forms::TextBox^ textBox89;
	private: System::Windows::Forms::TextBox^ textBox90;
	private: System::Windows::Forms::TextBox^ textBox91;
	private: System::Windows::Forms::TextBox^ textBox92;
	private: System::Windows::Forms::TextBox^ textBox93;
	private: System::Windows::Forms::TextBox^ textBox94;
	private: System::Windows::Forms::TextBox^ textBox95;
	private: System::Windows::Forms::TextBox^ textBox96;
	private: System::Windows::Forms::TextBox^ textBox97;
	private: System::Windows::Forms::TextBox^ textBox98;
	private: System::Windows::Forms::TextBox^ textBox99;
	private: System::Windows::Forms::TextBox^ textBox100;
	private: System::Windows::Forms::TextBox^ textBox101;
	private: System::Windows::Forms::TextBox^ textBox102;
	private: System::Windows::Forms::TextBox^ textBox103;
	private: System::Windows::Forms::TextBox^ textBox104;
	private: System::Windows::Forms::TextBox^ textBox105;
	private: System::Windows::Forms::TextBox^ textBox106;
	private: System::Windows::Forms::TextBox^ textBox107;
	private: System::Windows::Forms::TextBox^ textBox108;
	private: System::Windows::Forms::TextBox^ textBox109;
	private: System::Windows::Forms::TextBox^ textBox110;
	private: System::Windows::Forms::TextBox^ textBox111;
	private: System::Windows::Forms::TextBox^ textBox112;
	private: System::Windows::Forms::TextBox^ textBox113;
	private: System::Windows::Forms::TextBox^ textBox114;
	private: System::Windows::Forms::TextBox^ textBox115;
	private: System::Windows::Forms::TextBox^ textBox116;
	private: System::Windows::Forms::TextBox^ textBox117;
	private: System::Windows::Forms::TextBox^ textBox118;
	private: System::Windows::Forms::TextBox^ textBox119;
	private: System::Windows::Forms::TextBox^ textBox120;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::Label^ label88;
	private: System::Windows::Forms::Label^ label89;
	private: System::Windows::Forms::Label^ label90;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::Label^ label94;
	private: System::Windows::Forms::Label^ label95;
	private: System::Windows::Forms::Label^ label96;
	private: System::Windows::Forms::Label^ label97;
	private: System::Windows::Forms::Label^ label98;
	private: System::Windows::Forms::Label^ label99;
	private: System::Windows::Forms::Label^ label100;
	private: System::Windows::Forms::Label^ label101;
	private: System::Windows::Forms::Label^ label102;
	private: System::Windows::Forms::Label^ label103;
	private: System::Windows::Forms::Label^ label104;
	private: System::Windows::Forms::Label^ label105;
	private: System::Windows::Forms::Label^ label106;
	private: System::Windows::Forms::Label^ label107;
	private: System::Windows::Forms::Label^ label108;
	private: System::Windows::Forms::Label^ label109;
	private: System::Windows::Forms::Label^ label110;
	private: System::Windows::Forms::Label^ label111;
	private: System::Windows::Forms::Label^ label112;
	private: System::Windows::Forms::Label^ label113;
	private: System::Windows::Forms::Label^ label114;
	private: System::Windows::Forms::Label^ label115;
	private: System::Windows::Forms::Label^ label116;
	private: System::Windows::Forms::Label^ label117;
	private: System::Windows::Forms::Label^ label118;
	private: System::Windows::Forms::Label^ label119;

	private: System::Windows::Forms::Label^ label121;
	private: System::Windows::Forms::Label^ label122;
	private: System::Windows::Forms::Label^ label123;
	private: System::Windows::Forms::Label^ label124;
	private: System::Windows::Forms::Label^ label125;
	private: System::Windows::Forms::Label^ label126;
	private: System::Windows::Forms::Label^ label127;
	private: System::Windows::Forms::Label^ label128;
	private: System::Windows::Forms::Label^ label129;
	private: System::Windows::Forms::Label^ label130;
	private: System::Windows::Forms::Label^ label131;
	private: System::Windows::Forms::Label^ label132;
	private: System::Windows::Forms::Label^ label133;
	private: System::Windows::Forms::Label^ label134;
	private: System::Windows::Forms::Label^ label135;
	private: System::Windows::Forms::Label^ label136;
	private: System::Windows::Forms::Label^ label137;
	private: System::Windows::Forms::Label^ label138;
	private: System::Windows::Forms::Label^ label139;
	private: System::Windows::Forms::Label^ label140;
	private: System::Windows::Forms::Label^ label141;
	private: System::Windows::Forms::Label^ label142;
	private: System::Windows::Forms::Label^ label143;
	private: System::Windows::Forms::Label^ label144;
	private: System::Windows::Forms::Label^ label145;
	private: System::Windows::Forms::Label^ label146;
	private: System::Windows::Forms::Label^ label147;
	private: System::Windows::Forms::Label^ label148;
	private: System::Windows::Forms::Label^ label149;
	private: System::Windows::Forms::Label^ label150;
	private: System::Windows::Forms::Label^ label151;
	private: System::Windows::Forms::Button^ Agregar_Relacion;
	private: System::Windows::Forms::TextBox^ textBox121;
	private: System::Windows::Forms::Label^ label120;
	private: System::Windows::Forms::Label^ label152;
	private: System::Windows::Forms::Label^ label153;
	private: System::Windows::Forms::Label^ label154;
	private: System::Windows::Forms::Label^ label155;
	private: System::Windows::Forms::Button^ Matriz_relacion;

	private: System::Windows::Forms::Label^ label156;
	private: System::Windows::Forms::Label^ label157;
	private: System::Windows::Forms::Label^ label158;
	private: System::Windows::Forms::Label^ label159;
	private: System::Windows::Forms::Label^ label160;
	private: System::Windows::Forms::Label^ label161;
	private: System::Windows::Forms::Label^ label162;
	private: System::Windows::Forms::Label^ label163;
	private: System::Windows::Forms::Label^ label164;
	private: System::Windows::Forms::Label^ label165;
	private: System::Windows::Forms::Label^ label166;
	private: System::Windows::Forms::Label^ label167;
	private: System::Windows::Forms::Label^ label168;
	private: System::Windows::Forms::Label^ label169;
	private: System::Windows::Forms::Label^ label170;
	private: System::Windows::Forms::Label^ label171;
	private: System::Windows::Forms::Label^ label172;
	private: System::Windows::Forms::Label^ label173;
	private: System::Windows::Forms::Label^ label174;
	private: System::Windows::Forms::Label^ label175;
	private: System::Windows::Forms::Label^ label176;
	private: System::Windows::Forms::Label^ label177;
	private: System::Windows::Forms::Label^ label178;
	private: System::Windows::Forms::Label^ label179;
	private: System::Windows::Forms::Label^ label180;
	private: System::Windows::Forms::Label^ label181;
	private: System::Windows::Forms::Label^ label182;
	private: System::Windows::Forms::Label^ label183;
	private: System::Windows::Forms::Label^ label184;
	private: System::Windows::Forms::Label^ label185;
	private: System::Windows::Forms::Label^ label186;
	private: System::Windows::Forms::Label^ label187;
	private: System::Windows::Forms::Label^ label188;
	private: System::Windows::Forms::Label^ label189;
	private: System::Windows::Forms::Label^ label190;
	private: System::Windows::Forms::Label^ label191;
	private: System::Windows::Forms::Label^ label192;
	private: System::Windows::Forms::Label^ label193;
	private: System::Windows::Forms::Label^ label194;
	private: System::Windows::Forms::Label^ label195;
	private: System::Windows::Forms::Label^ label196;
	private: System::Windows::Forms::Label^ label197;
	private: System::Windows::Forms::Label^ label198;
	private: System::Windows::Forms::Label^ label199;
	private: System::Windows::Forms::Label^ label200;
	private: System::Windows::Forms::Label^ label201;
	private: System::Windows::Forms::Label^ label202;
	private: System::Windows::Forms::Label^ label203;
	private: System::Windows::Forms::Label^ label204;
	private: System::Windows::Forms::Label^ label205;
	private: System::Windows::Forms::Label^ label206;
	private: System::Windows::Forms::Label^ label207;
	private: System::Windows::Forms::Label^ label208;
	private: System::Windows::Forms::Label^ label209;
	private: System::Windows::Forms::Label^ label210;
	private: System::Windows::Forms::Label^ label211;
	private: System::Windows::Forms::Label^ label212;
	private: System::Windows::Forms::Label^ label213;
	private: System::Windows::Forms::Label^ label214;
	private: System::Windows::Forms::Label^ label215;
	private: System::Windows::Forms::Label^ label216;
	private: System::Windows::Forms::Label^ label217;
	private: System::Windows::Forms::Label^ label218;
	private: System::Windows::Forms::Label^ label219;
	private: System::Windows::Forms::Label^ label220;
	private: System::Windows::Forms::Button^ Diag_Hasse;

	private: System::Windows::Forms::Label^ label221;
	private: System::Windows::Forms::Label^ label222;
	private: System::Windows::Forms::Label^ label223;
	private: System::Windows::Forms::Label^ label224;
	private: System::Windows::Forms::Label^ label225;
	private: System::Windows::Forms::Label^ label226;
	private: System::Windows::Forms::Label^ label227;
	private: System::Windows::Forms::Label^ label228;
	private: System::Windows::Forms::Label^ label229;
	private: System::Windows::Forms::Label^ label230;
	private: System::Windows::Forms::Label^ label231;
	private: System::Windows::Forms::Label^ label232;
	private: System::Windows::Forms::Label^ label233;
	private: System::Windows::Forms::Label^ label234;




	private: System::Windows::Forms::TextBox^ textBox22;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Boton_Mostrar = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->Nuevo_Datos = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->textBox106 = (gcnew System::Windows::Forms::TextBox());
			this->textBox107 = (gcnew System::Windows::Forms::TextBox());
			this->textBox108 = (gcnew System::Windows::Forms::TextBox());
			this->textBox109 = (gcnew System::Windows::Forms::TextBox());
			this->textBox110 = (gcnew System::Windows::Forms::TextBox());
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->textBox112 = (gcnew System::Windows::Forms::TextBox());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->textBox116 = (gcnew System::Windows::Forms::TextBox());
			this->textBox117 = (gcnew System::Windows::Forms::TextBox());
			this->textBox118 = (gcnew System::Windows::Forms::TextBox());
			this->textBox119 = (gcnew System::Windows::Forms::TextBox());
			this->textBox120 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->Agregar_Relacion = (gcnew System::Windows::Forms::Button());
			this->textBox121 = (gcnew System::Windows::Forms::TextBox());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->Matriz_relacion = (gcnew System::Windows::Forms::Button());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->Diag_Hasse = (gcnew System::Windows::Forms::Button());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->label222 = (gcnew System::Windows::Forms::Label());
			this->label223 = (gcnew System::Windows::Forms::Label());
			this->label224 = (gcnew System::Windows::Forms::Label());
			this->label225 = (gcnew System::Windows::Forms::Label());
			this->label226 = (gcnew System::Windows::Forms::Label());
			this->label227 = (gcnew System::Windows::Forms::Label());
			this->label228 = (gcnew System::Windows::Forms::Label());
			this->label229 = (gcnew System::Windows::Forms::Label());
			this->label230 = (gcnew System::Windows::Forms::Label());
			this->label231 = (gcnew System::Windows::Forms::Label());
			this->label232 = (gcnew System::Windows::Forms::Label());
			this->label233 = (gcnew System::Windows::Forms::Label());
			this->label234 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(218, 6);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 24);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(286, 6);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 24);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Random";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese # de elementos (4 - 7)";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(11, 51);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(46, 23);
			this->textBox2->TabIndex = 3;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(61, 51);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 23);
			this->textBox3->TabIndex = 4;
			this->textBox3->Visible = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(113, 51);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(46, 23);
			this->textBox4->TabIndex = 5;
			this->textBox4->Visible = false;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(163, 51);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(46, 23);
			this->textBox5->TabIndex = 6;
			this->textBox5->Visible = false;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(213, 51);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(46, 23);
			this->textBox6->TabIndex = 7;
			this->textBox6->Visible = false;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(263, 51);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(46, 23);
			this->textBox7->TabIndex = 8;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(312, 51);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(46, 23);
			this->textBox8->TabIndex = 9;
			this->textBox8->Visible = false;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(5, 32);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"La cantidad de elementos no es valida";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(8, 76);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Los elementos marcados de rojo no son validos";
			this->label3->Visible = false;
			// 
			// Boton_Mostrar
			// 
			this->Boton_Mostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Mostrar->Location = System::Drawing::Point(431, 6);
			this->Boton_Mostrar->Name = L"Boton_Mostrar";
			this->Boton_Mostrar->Size = System::Drawing::Size(155, 24);
			this->Boton_Mostrar->TabIndex = 12;
			this->Boton_Mostrar->Text = L"Mostrar Producto";
			this->Boton_Mostrar->UseVisualStyleBackColor = true;
			this->Boton_Mostrar->Visible = false;
			this->Boton_Mostrar->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(18, 146);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(46, 20);
			this->textBox9->TabIndex = 13;
			this->textBox9->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(18, 167);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(46, 20);
			this->textBox10->TabIndex = 14;
			this->textBox10->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(18, 190);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(46, 20);
			this->textBox11->TabIndex = 15;
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(18, 214);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(46, 20);
			this->textBox12->TabIndex = 16;
			this->textBox12->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(18, 237);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(46, 20);
			this->textBox13->TabIndex = 17;
			this->textBox13->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(18, 260);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(46, 20);
			this->textBox14->TabIndex = 18;
			this->textBox14->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(18, 283);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(46, 20);
			this->textBox15->TabIndex = 19;
			this->textBox15->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(92, 124);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(46, 20);
			this->textBox16->TabIndex = 20;
			this->textBox16->Visible = false;
			// 
			// textBox17
			// 
			this->textBox17->Enabled = false;
			this->textBox17->Location = System::Drawing::Point(182, 124);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(46, 20);
			this->textBox17->TabIndex = 21;
			this->textBox17->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->Enabled = false;
			this->textBox18->Location = System::Drawing::Point(263, 124);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(46, 20);
			this->textBox18->TabIndex = 22;
			this->textBox18->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->Enabled = false;
			this->textBox19->Location = System::Drawing::Point(346, 124);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(46, 20);
			this->textBox19->TabIndex = 23;
			this->textBox19->Visible = false;
			// 
			// textBox20
			// 
			this->textBox20->Enabled = false;
			this->textBox20->Location = System::Drawing::Point(428, 124);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(46, 20);
			this->textBox20->TabIndex = 24;
			this->textBox20->Visible = false;
			// 
			// textBox21
			// 
			this->textBox21->Enabled = false;
			this->textBox21->Location = System::Drawing::Point(516, 124);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(46, 20);
			this->textBox21->TabIndex = 25;
			this->textBox21->Visible = false;
			// 
			// textBox22
			// 
			this->textBox22->Enabled = false;
			this->textBox22->Location = System::Drawing::Point(593, 124);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(46, 20);
			this->textBox22->TabIndex = 26;
			this->textBox22->Visible = false;
			// 
			// Nuevo_Datos
			// 
			this->Nuevo_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nuevo_Datos->Location = System::Drawing::Point(403, 36);
			this->Nuevo_Datos->Name = L"Nuevo_Datos";
			this->Nuevo_Datos->Size = System::Drawing::Size(230, 34);
			this->Nuevo_Datos->TabIndex = 27;
			this->Nuevo_Datos->Text = L"Ingresar nuevos elementos";
			this->Nuevo_Datos->UseVisualStyleBackColor = true;
			this->Nuevo_Datos->Visible = false;
			this->Nuevo_Datos->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// textBox23
			// 
			this->textBox23->Enabled = false;
			this->textBox23->Location = System::Drawing::Point(92, 146);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(19, 20);
			this->textBox23->TabIndex = 28;
			this->textBox23->Visible = false;
			// 
			// textBox24
			// 
			this->textBox24->Enabled = false;
			this->textBox24->Location = System::Drawing::Point(119, 146);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(19, 20);
			this->textBox24->TabIndex = 29;
			this->textBox24->Visible = false;
			// 
			// textBox25
			// 
			this->textBox25->Enabled = false;
			this->textBox25->Location = System::Drawing::Point(209, 146);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(19, 20);
			this->textBox25->TabIndex = 31;
			this->textBox25->Visible = false;
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(182, 146);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(19, 20);
			this->textBox26->TabIndex = 30;
			this->textBox26->Visible = false;
			// 
			// textBox27
			// 
			this->textBox27->Enabled = false;
			this->textBox27->Location = System::Drawing::Point(290, 146);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(19, 20);
			this->textBox27->TabIndex = 33;
			this->textBox27->Visible = false;
			// 
			// textBox28
			// 
			this->textBox28->Enabled = false;
			this->textBox28->Location = System::Drawing::Point(263, 146);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(19, 20);
			this->textBox28->TabIndex = 32;
			this->textBox28->Visible = false;
			// 
			// textBox29
			// 
			this->textBox29->Enabled = false;
			this->textBox29->Location = System::Drawing::Point(373, 146);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(19, 20);
			this->textBox29->TabIndex = 35;
			this->textBox29->Visible = false;
			// 
			// textBox30
			// 
			this->textBox30->Enabled = false;
			this->textBox30->Location = System::Drawing::Point(346, 146);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(19, 20);
			this->textBox30->TabIndex = 34;
			this->textBox30->Visible = false;
			// 
			// textBox31
			// 
			this->textBox31->Enabled = false;
			this->textBox31->Location = System::Drawing::Point(455, 146);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(19, 20);
			this->textBox31->TabIndex = 37;
			this->textBox31->Visible = false;
			// 
			// textBox32
			// 
			this->textBox32->Enabled = false;
			this->textBox32->Location = System::Drawing::Point(428, 146);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(19, 20);
			this->textBox32->TabIndex = 36;
			this->textBox32->Visible = false;
			// 
			// textBox33
			// 
			this->textBox33->Enabled = false;
			this->textBox33->Location = System::Drawing::Point(543, 146);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(19, 20);
			this->textBox33->TabIndex = 39;
			this->textBox33->Visible = false;
			// 
			// textBox34
			// 
			this->textBox34->Enabled = false;
			this->textBox34->Location = System::Drawing::Point(516, 146);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(19, 20);
			this->textBox34->TabIndex = 38;
			this->textBox34->Visible = false;
			// 
			// textBox35
			// 
			this->textBox35->Enabled = false;
			this->textBox35->Location = System::Drawing::Point(620, 146);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(19, 20);
			this->textBox35->TabIndex = 41;
			this->textBox35->Visible = false;
			// 
			// textBox36
			// 
			this->textBox36->Enabled = false;
			this->textBox36->Location = System::Drawing::Point(593, 146);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(19, 20);
			this->textBox36->TabIndex = 40;
			this->textBox36->Visible = false;
			// 
			// textBox37
			// 
			this->textBox37->Enabled = false;
			this->textBox37->Location = System::Drawing::Point(119, 167);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(19, 20);
			this->textBox37->TabIndex = 43;
			this->textBox37->Visible = false;
			// 
			// textBox38
			// 
			this->textBox38->Enabled = false;
			this->textBox38->Location = System::Drawing::Point(92, 167);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(19, 20);
			this->textBox38->TabIndex = 42;
			this->textBox38->Visible = false;
			// 
			// textBox39
			// 
			this->textBox39->Enabled = false;
			this->textBox39->Location = System::Drawing::Point(209, 167);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(19, 20);
			this->textBox39->TabIndex = 45;
			this->textBox39->Visible = false;
			// 
			// textBox40
			// 
			this->textBox40->Enabled = false;
			this->textBox40->Location = System::Drawing::Point(182, 167);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(19, 20);
			this->textBox40->TabIndex = 44;
			this->textBox40->Visible = false;
			// 
			// textBox41
			// 
			this->textBox41->Enabled = false;
			this->textBox41->Location = System::Drawing::Point(290, 167);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(19, 20);
			this->textBox41->TabIndex = 47;
			this->textBox41->Visible = false;
			// 
			// textBox42
			// 
			this->textBox42->Enabled = false;
			this->textBox42->Location = System::Drawing::Point(263, 167);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(19, 20);
			this->textBox42->TabIndex = 46;
			this->textBox42->Visible = false;
			// 
			// textBox43
			// 
			this->textBox43->Enabled = false;
			this->textBox43->Location = System::Drawing::Point(373, 167);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(19, 20);
			this->textBox43->TabIndex = 49;
			this->textBox43->Visible = false;
			// 
			// textBox44
			// 
			this->textBox44->Enabled = false;
			this->textBox44->Location = System::Drawing::Point(346, 167);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(19, 20);
			this->textBox44->TabIndex = 48;
			this->textBox44->Visible = false;
			// 
			// textBox45
			// 
			this->textBox45->Enabled = false;
			this->textBox45->Location = System::Drawing::Point(455, 167);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(19, 20);
			this->textBox45->TabIndex = 51;
			this->textBox45->Visible = false;
			// 
			// textBox46
			// 
			this->textBox46->Enabled = false;
			this->textBox46->Location = System::Drawing::Point(428, 167);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(19, 20);
			this->textBox46->TabIndex = 50;
			this->textBox46->Visible = false;
			// 
			// textBox47
			// 
			this->textBox47->Enabled = false;
			this->textBox47->Location = System::Drawing::Point(543, 167);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(19, 20);
			this->textBox47->TabIndex = 53;
			this->textBox47->Visible = false;
			// 
			// textBox48
			// 
			this->textBox48->Enabled = false;
			this->textBox48->Location = System::Drawing::Point(516, 167);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(19, 20);
			this->textBox48->TabIndex = 52;
			this->textBox48->Visible = false;
			// 
			// textBox49
			// 
			this->textBox49->Enabled = false;
			this->textBox49->Location = System::Drawing::Point(620, 167);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(19, 20);
			this->textBox49->TabIndex = 55;
			this->textBox49->Visible = false;
			// 
			// textBox50
			// 
			this->textBox50->Enabled = false;
			this->textBox50->Location = System::Drawing::Point(593, 167);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(19, 20);
			this->textBox50->TabIndex = 54;
			this->textBox50->Visible = false;
			// 
			// textBox51
			// 
			this->textBox51->Enabled = false;
			this->textBox51->Location = System::Drawing::Point(119, 190);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(19, 20);
			this->textBox51->TabIndex = 57;
			this->textBox51->Visible = false;
			// 
			// textBox52
			// 
			this->textBox52->Enabled = false;
			this->textBox52->Location = System::Drawing::Point(92, 190);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(19, 20);
			this->textBox52->TabIndex = 56;
			this->textBox52->Visible = false;
			// 
			// textBox53
			// 
			this->textBox53->Enabled = false;
			this->textBox53->Location = System::Drawing::Point(209, 190);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(19, 20);
			this->textBox53->TabIndex = 59;
			this->textBox53->Visible = false;
			// 
			// textBox54
			// 
			this->textBox54->Enabled = false;
			this->textBox54->Location = System::Drawing::Point(182, 190);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(19, 20);
			this->textBox54->TabIndex = 58;
			this->textBox54->Visible = false;
			// 
			// textBox55
			// 
			this->textBox55->Enabled = false;
			this->textBox55->Location = System::Drawing::Point(290, 190);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(19, 20);
			this->textBox55->TabIndex = 61;
			this->textBox55->Visible = false;
			// 
			// textBox56
			// 
			this->textBox56->Enabled = false;
			this->textBox56->Location = System::Drawing::Point(263, 190);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(19, 20);
			this->textBox56->TabIndex = 60;
			this->textBox56->Visible = false;
			// 
			// textBox57
			// 
			this->textBox57->Enabled = false;
			this->textBox57->Location = System::Drawing::Point(373, 190);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(19, 20);
			this->textBox57->TabIndex = 63;
			this->textBox57->Visible = false;
			// 
			// textBox58
			// 
			this->textBox58->Enabled = false;
			this->textBox58->Location = System::Drawing::Point(346, 190);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(19, 20);
			this->textBox58->TabIndex = 62;
			this->textBox58->Visible = false;
			// 
			// textBox59
			// 
			this->textBox59->Enabled = false;
			this->textBox59->Location = System::Drawing::Point(455, 190);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(19, 20);
			this->textBox59->TabIndex = 65;
			this->textBox59->Visible = false;
			// 
			// textBox60
			// 
			this->textBox60->Enabled = false;
			this->textBox60->Location = System::Drawing::Point(428, 190);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(19, 20);
			this->textBox60->TabIndex = 64;
			this->textBox60->Visible = false;
			// 
			// textBox61
			// 
			this->textBox61->Enabled = false;
			this->textBox61->Location = System::Drawing::Point(543, 190);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(19, 20);
			this->textBox61->TabIndex = 67;
			this->textBox61->Visible = false;
			// 
			// textBox62
			// 
			this->textBox62->Enabled = false;
			this->textBox62->Location = System::Drawing::Point(516, 190);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(19, 20);
			this->textBox62->TabIndex = 66;
			this->textBox62->Visible = false;
			// 
			// textBox63
			// 
			this->textBox63->Enabled = false;
			this->textBox63->Location = System::Drawing::Point(620, 190);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(19, 20);
			this->textBox63->TabIndex = 69;
			this->textBox63->Visible = false;
			// 
			// textBox64
			// 
			this->textBox64->Enabled = false;
			this->textBox64->Location = System::Drawing::Point(593, 190);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(19, 20);
			this->textBox64->TabIndex = 68;
			this->textBox64->Visible = false;
			// 
			// textBox65
			// 
			this->textBox65->Enabled = false;
			this->textBox65->Location = System::Drawing::Point(119, 214);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(19, 20);
			this->textBox65->TabIndex = 71;
			this->textBox65->Visible = false;
			// 
			// textBox66
			// 
			this->textBox66->Enabled = false;
			this->textBox66->Location = System::Drawing::Point(92, 214);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(19, 20);
			this->textBox66->TabIndex = 70;
			this->textBox66->Visible = false;
			// 
			// textBox67
			// 
			this->textBox67->Enabled = false;
			this->textBox67->Location = System::Drawing::Point(209, 214);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(19, 20);
			this->textBox67->TabIndex = 73;
			this->textBox67->Visible = false;
			// 
			// textBox68
			// 
			this->textBox68->Enabled = false;
			this->textBox68->Location = System::Drawing::Point(182, 214);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(19, 20);
			this->textBox68->TabIndex = 72;
			this->textBox68->Visible = false;
			// 
			// textBox69
			// 
			this->textBox69->Enabled = false;
			this->textBox69->Location = System::Drawing::Point(290, 214);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(19, 20);
			this->textBox69->TabIndex = 75;
			this->textBox69->Visible = false;
			// 
			// textBox70
			// 
			this->textBox70->Enabled = false;
			this->textBox70->Location = System::Drawing::Point(263, 214);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(19, 20);
			this->textBox70->TabIndex = 74;
			this->textBox70->Visible = false;
			// 
			// textBox71
			// 
			this->textBox71->Enabled = false;
			this->textBox71->Location = System::Drawing::Point(373, 214);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(19, 20);
			this->textBox71->TabIndex = 77;
			this->textBox71->Visible = false;
			// 
			// textBox72
			// 
			this->textBox72->Enabled = false;
			this->textBox72->Location = System::Drawing::Point(346, 214);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(19, 20);
			this->textBox72->TabIndex = 76;
			this->textBox72->Visible = false;
			// 
			// textBox73
			// 
			this->textBox73->Enabled = false;
			this->textBox73->Location = System::Drawing::Point(455, 214);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(19, 20);
			this->textBox73->TabIndex = 79;
			this->textBox73->Visible = false;
			// 
			// textBox74
			// 
			this->textBox74->Enabled = false;
			this->textBox74->Location = System::Drawing::Point(428, 214);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(19, 20);
			this->textBox74->TabIndex = 78;
			this->textBox74->Visible = false;
			// 
			// textBox75
			// 
			this->textBox75->Enabled = false;
			this->textBox75->Location = System::Drawing::Point(543, 214);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(19, 20);
			this->textBox75->TabIndex = 81;
			this->textBox75->Visible = false;
			// 
			// textBox76
			// 
			this->textBox76->Enabled = false;
			this->textBox76->Location = System::Drawing::Point(516, 214);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(19, 20);
			this->textBox76->TabIndex = 80;
			this->textBox76->Visible = false;
			// 
			// textBox77
			// 
			this->textBox77->Enabled = false;
			this->textBox77->Location = System::Drawing::Point(620, 214);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(19, 20);
			this->textBox77->TabIndex = 83;
			this->textBox77->Visible = false;
			// 
			// textBox78
			// 
			this->textBox78->Enabled = false;
			this->textBox78->Location = System::Drawing::Point(593, 214);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(19, 20);
			this->textBox78->TabIndex = 82;
			this->textBox78->Visible = false;
			// 
			// textBox79
			// 
			this->textBox79->Enabled = false;
			this->textBox79->Location = System::Drawing::Point(119, 237);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(19, 20);
			this->textBox79->TabIndex = 85;
			this->textBox79->Visible = false;
			// 
			// textBox80
			// 
			this->textBox80->Enabled = false;
			this->textBox80->Location = System::Drawing::Point(92, 237);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(19, 20);
			this->textBox80->TabIndex = 84;
			this->textBox80->Visible = false;
			// 
			// textBox81
			// 
			this->textBox81->Enabled = false;
			this->textBox81->Location = System::Drawing::Point(209, 237);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(19, 20);
			this->textBox81->TabIndex = 87;
			this->textBox81->Visible = false;
			// 
			// textBox82
			// 
			this->textBox82->Enabled = false;
			this->textBox82->Location = System::Drawing::Point(182, 237);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(19, 20);
			this->textBox82->TabIndex = 86;
			this->textBox82->Visible = false;
			// 
			// textBox83
			// 
			this->textBox83->Enabled = false;
			this->textBox83->Location = System::Drawing::Point(290, 237);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(19, 20);
			this->textBox83->TabIndex = 89;
			this->textBox83->Visible = false;
			// 
			// textBox84
			// 
			this->textBox84->Enabled = false;
			this->textBox84->Location = System::Drawing::Point(263, 237);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(19, 20);
			this->textBox84->TabIndex = 88;
			this->textBox84->Visible = false;
			// 
			// textBox85
			// 
			this->textBox85->Enabled = false;
			this->textBox85->Location = System::Drawing::Point(373, 237);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(19, 20);
			this->textBox85->TabIndex = 91;
			this->textBox85->Visible = false;
			// 
			// textBox86
			// 
			this->textBox86->Enabled = false;
			this->textBox86->Location = System::Drawing::Point(346, 237);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(19, 20);
			this->textBox86->TabIndex = 90;
			this->textBox86->Visible = false;
			// 
			// textBox87
			// 
			this->textBox87->Enabled = false;
			this->textBox87->Location = System::Drawing::Point(455, 237);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(19, 20);
			this->textBox87->TabIndex = 93;
			this->textBox87->Visible = false;
			// 
			// textBox88
			// 
			this->textBox88->Enabled = false;
			this->textBox88->Location = System::Drawing::Point(428, 237);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(19, 20);
			this->textBox88->TabIndex = 92;
			this->textBox88->Visible = false;
			// 
			// textBox89
			// 
			this->textBox89->Enabled = false;
			this->textBox89->Location = System::Drawing::Point(543, 237);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(19, 20);
			this->textBox89->TabIndex = 95;
			this->textBox89->Visible = false;
			// 
			// textBox90
			// 
			this->textBox90->Enabled = false;
			this->textBox90->Location = System::Drawing::Point(516, 237);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(19, 20);
			this->textBox90->TabIndex = 94;
			this->textBox90->Visible = false;
			// 
			// textBox91
			// 
			this->textBox91->Enabled = false;
			this->textBox91->Location = System::Drawing::Point(620, 237);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(19, 20);
			this->textBox91->TabIndex = 97;
			this->textBox91->Visible = false;
			// 
			// textBox92
			// 
			this->textBox92->Enabled = false;
			this->textBox92->Location = System::Drawing::Point(593, 237);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(19, 20);
			this->textBox92->TabIndex = 96;
			this->textBox92->Visible = false;
			// 
			// textBox93
			// 
			this->textBox93->Enabled = false;
			this->textBox93->Location = System::Drawing::Point(119, 260);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(19, 20);
			this->textBox93->TabIndex = 99;
			this->textBox93->Visible = false;
			// 
			// textBox94
			// 
			this->textBox94->Enabled = false;
			this->textBox94->Location = System::Drawing::Point(92, 260);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(19, 20);
			this->textBox94->TabIndex = 98;
			this->textBox94->Visible = false;
			// 
			// textBox95
			// 
			this->textBox95->Enabled = false;
			this->textBox95->Location = System::Drawing::Point(209, 260);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(19, 20);
			this->textBox95->TabIndex = 101;
			this->textBox95->Visible = false;
			// 
			// textBox96
			// 
			this->textBox96->Enabled = false;
			this->textBox96->Location = System::Drawing::Point(182, 260);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(19, 20);
			this->textBox96->TabIndex = 100;
			this->textBox96->Visible = false;
			// 
			// textBox97
			// 
			this->textBox97->Enabled = false;
			this->textBox97->Location = System::Drawing::Point(290, 260);
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(19, 20);
			this->textBox97->TabIndex = 103;
			this->textBox97->Visible = false;
			// 
			// textBox98
			// 
			this->textBox98->Enabled = false;
			this->textBox98->Location = System::Drawing::Point(263, 260);
			this->textBox98->Name = L"textBox98";
			this->textBox98->Size = System::Drawing::Size(19, 20);
			this->textBox98->TabIndex = 102;
			this->textBox98->Visible = false;
			// 
			// textBox99
			// 
			this->textBox99->Enabled = false;
			this->textBox99->Location = System::Drawing::Point(373, 260);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(19, 20);
			this->textBox99->TabIndex = 105;
			this->textBox99->Visible = false;
			// 
			// textBox100
			// 
			this->textBox100->Enabled = false;
			this->textBox100->Location = System::Drawing::Point(346, 260);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(19, 20);
			this->textBox100->TabIndex = 104;
			this->textBox100->Visible = false;
			// 
			// textBox101
			// 
			this->textBox101->Enabled = false;
			this->textBox101->Location = System::Drawing::Point(455, 260);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(19, 20);
			this->textBox101->TabIndex = 107;
			this->textBox101->Visible = false;
			// 
			// textBox102
			// 
			this->textBox102->Enabled = false;
			this->textBox102->Location = System::Drawing::Point(428, 260);
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(19, 20);
			this->textBox102->TabIndex = 106;
			this->textBox102->Visible = false;
			// 
			// textBox103
			// 
			this->textBox103->Enabled = false;
			this->textBox103->Location = System::Drawing::Point(543, 260);
			this->textBox103->Name = L"textBox103";
			this->textBox103->Size = System::Drawing::Size(19, 20);
			this->textBox103->TabIndex = 109;
			this->textBox103->Visible = false;
			// 
			// textBox104
			// 
			this->textBox104->Enabled = false;
			this->textBox104->Location = System::Drawing::Point(516, 260);
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(19, 20);
			this->textBox104->TabIndex = 108;
			this->textBox104->Visible = false;
			// 
			// textBox105
			// 
			this->textBox105->Enabled = false;
			this->textBox105->Location = System::Drawing::Point(620, 260);
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(19, 20);
			this->textBox105->TabIndex = 111;
			this->textBox105->Visible = false;
			// 
			// textBox106
			// 
			this->textBox106->Enabled = false;
			this->textBox106->Location = System::Drawing::Point(593, 260);
			this->textBox106->Name = L"textBox106";
			this->textBox106->Size = System::Drawing::Size(19, 20);
			this->textBox106->TabIndex = 110;
			this->textBox106->Visible = false;
			// 
			// textBox107
			// 
			this->textBox107->Enabled = false;
			this->textBox107->Location = System::Drawing::Point(119, 283);
			this->textBox107->Name = L"textBox107";
			this->textBox107->Size = System::Drawing::Size(19, 20);
			this->textBox107->TabIndex = 113;
			this->textBox107->Visible = false;
			// 
			// textBox108
			// 
			this->textBox108->Enabled = false;
			this->textBox108->Location = System::Drawing::Point(92, 283);
			this->textBox108->Name = L"textBox108";
			this->textBox108->Size = System::Drawing::Size(19, 20);
			this->textBox108->TabIndex = 112;
			this->textBox108->Visible = false;
			// 
			// textBox109
			// 
			this->textBox109->Enabled = false;
			this->textBox109->Location = System::Drawing::Point(209, 283);
			this->textBox109->Name = L"textBox109";
			this->textBox109->Size = System::Drawing::Size(19, 20);
			this->textBox109->TabIndex = 115;
			this->textBox109->Visible = false;
			// 
			// textBox110
			// 
			this->textBox110->Enabled = false;
			this->textBox110->Location = System::Drawing::Point(182, 283);
			this->textBox110->Name = L"textBox110";
			this->textBox110->Size = System::Drawing::Size(19, 20);
			this->textBox110->TabIndex = 114;
			this->textBox110->Visible = false;
			// 
			// textBox111
			// 
			this->textBox111->Enabled = false;
			this->textBox111->Location = System::Drawing::Point(290, 283);
			this->textBox111->Name = L"textBox111";
			this->textBox111->Size = System::Drawing::Size(19, 20);
			this->textBox111->TabIndex = 117;
			this->textBox111->Visible = false;
			// 
			// textBox112
			// 
			this->textBox112->Enabled = false;
			this->textBox112->Location = System::Drawing::Point(263, 283);
			this->textBox112->Name = L"textBox112";
			this->textBox112->Size = System::Drawing::Size(19, 20);
			this->textBox112->TabIndex = 116;
			this->textBox112->Visible = false;
			// 
			// textBox113
			// 
			this->textBox113->Enabled = false;
			this->textBox113->Location = System::Drawing::Point(373, 283);
			this->textBox113->Name = L"textBox113";
			this->textBox113->Size = System::Drawing::Size(19, 20);
			this->textBox113->TabIndex = 119;
			this->textBox113->Visible = false;
			// 
			// textBox114
			// 
			this->textBox114->Enabled = false;
			this->textBox114->Location = System::Drawing::Point(346, 283);
			this->textBox114->Name = L"textBox114";
			this->textBox114->Size = System::Drawing::Size(19, 20);
			this->textBox114->TabIndex = 118;
			this->textBox114->Visible = false;
			// 
			// textBox115
			// 
			this->textBox115->Enabled = false;
			this->textBox115->Location = System::Drawing::Point(455, 283);
			this->textBox115->Name = L"textBox115";
			this->textBox115->Size = System::Drawing::Size(19, 20);
			this->textBox115->TabIndex = 121;
			this->textBox115->Visible = false;
			// 
			// textBox116
			// 
			this->textBox116->Enabled = false;
			this->textBox116->Location = System::Drawing::Point(428, 283);
			this->textBox116->Name = L"textBox116";
			this->textBox116->Size = System::Drawing::Size(19, 20);
			this->textBox116->TabIndex = 120;
			this->textBox116->Visible = false;
			// 
			// textBox117
			// 
			this->textBox117->Enabled = false;
			this->textBox117->Location = System::Drawing::Point(543, 283);
			this->textBox117->Name = L"textBox117";
			this->textBox117->Size = System::Drawing::Size(19, 20);
			this->textBox117->TabIndex = 123;
			this->textBox117->Visible = false;
			// 
			// textBox118
			// 
			this->textBox118->Enabled = false;
			this->textBox118->Location = System::Drawing::Point(516, 283);
			this->textBox118->Name = L"textBox118";
			this->textBox118->Size = System::Drawing::Size(19, 20);
			this->textBox118->TabIndex = 122;
			this->textBox118->Visible = false;
			// 
			// textBox119
			// 
			this->textBox119->Enabled = false;
			this->textBox119->Location = System::Drawing::Point(620, 283);
			this->textBox119->Name = L"textBox119";
			this->textBox119->Size = System::Drawing::Size(19, 20);
			this->textBox119->TabIndex = 125;
			this->textBox119->Visible = false;
			// 
			// textBox120
			// 
			this->textBox120->Enabled = false;
			this->textBox120->Location = System::Drawing::Point(593, 283);
			this->textBox120->Name = L"textBox120";
			this->textBox120->Size = System::Drawing::Size(19, 20);
			this->textBox120->TabIndex = 124;
			this->textBox120->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(74, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(11, 16);
			this->label4->TabIndex = 126;
			this->label4->Text = L"(";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(74, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(11, 16);
			this->label5->TabIndex = 127;
			this->label5->Text = L"(";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(74, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(11, 16);
			this->label6->TabIndex = 128;
			this->label6->Text = L"(";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(74, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(11, 16);
			this->label7->TabIndex = 129;
			this->label7->Text = L"(";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(74, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(11, 16);
			this->label8->TabIndex = 130;
			this->label8->Text = L"(";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(74, 264);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(11, 16);
			this->label9->TabIndex = 131;
			this->label9->Text = L"(";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(74, 287);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(11, 16);
			this->label10->TabIndex = 132;
			this->label10->Text = L"(";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(164, 150);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(11, 16);
			this->label11->TabIndex = 133;
			this->label11->Text = L"(";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(164, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(11, 16);
			this->label12->TabIndex = 134;
			this->label12->Text = L"(";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(164, 194);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(11, 16);
			this->label13->TabIndex = 135;
			this->label13->Text = L"(";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(164, 218);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(11, 16);
			this->label14->TabIndex = 136;
			this->label14->Text = L"(";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(164, 241);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(11, 16);
			this->label15->TabIndex = 137;
			this->label15->Text = L"(";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(164, 264);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(11, 16);
			this->label16->TabIndex = 138;
			this->label16->Text = L"(";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(164, 287);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(11, 16);
			this->label17->TabIndex = 139;
			this->label17->Text = L"(";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(245, 171);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(11, 16);
			this->label18->TabIndex = 140;
			this->label18->Text = L"(";
			this->label18->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(245, 150);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(11, 16);
			this->label19->TabIndex = 141;
			this->label19->Text = L"(";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(245, 194);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(11, 16);
			this->label20->TabIndex = 142;
			this->label20->Text = L"(";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(245, 218);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 16);
			this->label21->TabIndex = 143;
			this->label21->Text = L"(";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(245, 238);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(11, 16);
			this->label22->TabIndex = 144;
			this->label22->Text = L"(";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(245, 264);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(11, 16);
			this->label23->TabIndex = 145;
			this->label23->Text = L"(";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(245, 287);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(11, 16);
			this->label24->TabIndex = 146;
			this->label24->Text = L"(";
			this->label24->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(328, 150);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(11, 16);
			this->label25->TabIndex = 147;
			this->label25->Text = L"(";
			this->label25->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(328, 171);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(11, 16);
			this->label26->TabIndex = 148;
			this->label26->Text = L"(";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(328, 194);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(11, 16);
			this->label27->TabIndex = 149;
			this->label27->Text = L"(";
			this->label27->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(328, 218);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(11, 16);
			this->label28->TabIndex = 150;
			this->label28->Text = L"(";
			this->label28->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(328, 241);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(11, 16);
			this->label29->TabIndex = 151;
			this->label29->Text = L"(";
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(328, 264);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(11, 16);
			this->label30->TabIndex = 152;
			this->label30->Text = L"(";
			this->label30->Visible = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(328, 287);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(11, 16);
			this->label31->TabIndex = 153;
			this->label31->Text = L"(";
			this->label31->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(410, 150);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(11, 16);
			this->label32->TabIndex = 154;
			this->label32->Text = L"(";
			this->label32->Visible = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(410, 171);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(11, 16);
			this->label33->TabIndex = 155;
			this->label33->Text = L"(";
			this->label33->Visible = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(410, 194);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(11, 16);
			this->label34->TabIndex = 156;
			this->label34->Text = L"(";
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(410, 218);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(11, 16);
			this->label35->TabIndex = 157;
			this->label35->Text = L"(";
			this->label35->Visible = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(410, 241);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(11, 16);
			this->label36->TabIndex = 158;
			this->label36->Text = L"(";
			this->label36->Visible = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(410, 264);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(11, 16);
			this->label37->TabIndex = 159;
			this->label37->Text = L"(";
			this->label37->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(410, 287);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(11, 16);
			this->label38->TabIndex = 160;
			this->label38->Text = L"(";
			this->label38->Visible = false;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(498, 150);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(11, 16);
			this->label39->TabIndex = 161;
			this->label39->Text = L"(";
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(498, 171);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(11, 16);
			this->label40->TabIndex = 162;
			this->label40->Text = L"(";
			this->label40->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(498, 194);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(11, 16);
			this->label41->TabIndex = 163;
			this->label41->Text = L"(";
			this->label41->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(498, 218);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(11, 16);
			this->label42->TabIndex = 164;
			this->label42->Text = L"(";
			this->label42->Visible = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(498, 241);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(11, 16);
			this->label43->TabIndex = 165;
			this->label43->Text = L"(";
			this->label43->Visible = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(498, 264);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(11, 16);
			this->label44->TabIndex = 166;
			this->label44->Text = L"(";
			this->label44->Visible = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(498, 287);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(11, 16);
			this->label45->TabIndex = 167;
			this->label45->Text = L"(";
			this->label45->Visible = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(575, 150);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(11, 16);
			this->label46->TabIndex = 168;
			this->label46->Text = L"(";
			this->label46->Visible = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(575, 171);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(11, 16);
			this->label47->TabIndex = 169;
			this->label47->Text = L"(";
			this->label47->Visible = false;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(575, 194);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(11, 16);
			this->label48->TabIndex = 170;
			this->label48->Text = L"(";
			this->label48->Visible = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(575, 218);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(11, 16);
			this->label49->TabIndex = 171;
			this->label49->Text = L"(";
			this->label49->Visible = false;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(575, 241);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(11, 16);
			this->label50->TabIndex = 172;
			this->label50->Text = L"(";
			this->label50->Visible = false;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(575, 264);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(11, 16);
			this->label51->TabIndex = 173;
			this->label51->Text = L"(";
			this->label51->Visible = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(575, 287);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(11, 16);
			this->label52->TabIndex = 174;
			this->label52->Text = L"(";
			this->label52->Visible = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(310, 150);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(11, 16);
			this->label53->TabIndex = 175;
			this->label53->Text = L")";
			this->label53->Visible = false;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(310, 171);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(11, 16);
			this->label54->TabIndex = 176;
			this->label54->Text = L")";
			this->label54->Visible = false;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(310, 194);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(11, 16);
			this->label55->TabIndex = 177;
			this->label55->Text = L")";
			this->label55->Visible = false;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(310, 218);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(11, 16);
			this->label56->TabIndex = 178;
			this->label56->Text = L")";
			this->label56->Visible = false;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(310, 241);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(11, 16);
			this->label57->TabIndex = 179;
			this->label57->Text = L")";
			this->label57->Visible = false;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(227, 171);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(11, 16);
			this->label58->TabIndex = 180;
			this->label58->Text = L")";
			this->label58->Visible = false;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(310, 264);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(11, 16);
			this->label59->TabIndex = 180;
			this->label59->Text = L")";
			this->label59->Visible = false;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(310, 287);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(11, 16);
			this->label60->TabIndex = 181;
			this->label60->Text = L")";
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(392, 150);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(11, 16);
			this->label61->TabIndex = 182;
			this->label61->Text = L")";
			this->label61->Visible = false;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(392, 171);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(11, 16);
			this->label62->TabIndex = 183;
			this->label62->Text = L")";
			this->label62->Visible = false;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(392, 194);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(11, 16);
			this->label63->TabIndex = 184;
			this->label63->Text = L")";
			this->label63->Visible = false;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(392, 218);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(11, 16);
			this->label64->TabIndex = 185;
			this->label64->Text = L")";
			this->label64->Visible = false;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(392, 241);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(11, 16);
			this->label65->TabIndex = 186;
			this->label65->Text = L")";
			this->label65->Visible = false;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(392, 264);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(11, 16);
			this->label66->TabIndex = 187;
			this->label66->Text = L")";
			this->label66->Visible = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(392, 287);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(11, 16);
			this->label67->TabIndex = 188;
			this->label67->Text = L")";
			this->label67->Visible = false;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(480, 150);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(11, 16);
			this->label68->TabIndex = 189;
			this->label68->Text = L")";
			this->label68->Visible = false;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(480, 171);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(11, 16);
			this->label69->TabIndex = 190;
			this->label69->Text = L")";
			this->label69->Visible = false;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(480, 194);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(11, 16);
			this->label70->TabIndex = 191;
			this->label70->Text = L")";
			this->label70->Visible = false;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(480, 218);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(11, 16);
			this->label71->TabIndex = 192;
			this->label71->Text = L")";
			this->label71->Visible = false;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(480, 241);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(11, 16);
			this->label72->TabIndex = 193;
			this->label72->Text = L")";
			this->label72->Visible = false;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(480, 264);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(11, 16);
			this->label73->TabIndex = 194;
			this->label73->Text = L")";
			this->label73->Visible = false;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(480, 287);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(11, 16);
			this->label74->TabIndex = 195;
			this->label74->Text = L")";
			this->label74->Visible = false;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(645, 150);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(11, 16);
			this->label75->TabIndex = 196;
			this->label75->Text = L")";
			this->label75->Visible = false;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(645, 171);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(11, 16);
			this->label76->TabIndex = 197;
			this->label76->Text = L")";
			this->label76->Visible = false;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(645, 287);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(11, 16);
			this->label77->TabIndex = 198;
			this->label77->Text = L")";
			this->label77->Visible = false;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(645, 194);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(11, 16);
			this->label78->TabIndex = 198;
			this->label78->Text = L")";
			this->label78->Visible = false;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(645, 264);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(11, 16);
			this->label79->TabIndex = 199;
			this->label79->Text = L")";
			this->label79->Visible = false;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(645, 218);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(11, 16);
			this->label80->TabIndex = 199;
			this->label80->Text = L")";
			this->label80->Visible = false;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(645, 241);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(11, 16);
			this->label81->TabIndex = 200;
			this->label81->Text = L")";
			this->label81->Visible = false;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(227, 150);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(11, 16);
			this->label82->TabIndex = 201;
			this->label82->Text = L")";
			this->label82->Visible = false;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(227, 194);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(11, 16);
			this->label83->TabIndex = 202;
			this->label83->Text = L")";
			this->label83->Visible = false;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->Location = System::Drawing::Point(227, 287);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(11, 16);
			this->label84->TabIndex = 203;
			this->label84->Text = L")";
			this->label84->Visible = false;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->Location = System::Drawing::Point(227, 264);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(11, 16);
			this->label85->TabIndex = 204;
			this->label85->Text = L")";
			this->label85->Visible = false;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->Location = System::Drawing::Point(227, 218);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(11, 16);
			this->label86->TabIndex = 205;
			this->label86->Text = L")";
			this->label86->Visible = false;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(227, 241);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(11, 16);
			this->label87->TabIndex = 206;
			this->label87->Text = L")";
			this->label87->Visible = false;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(144, 218);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(11, 16);
			this->label88->TabIndex = 207;
			this->label88->Text = L")";
			this->label88->Visible = false;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->Location = System::Drawing::Point(144, 194);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(11, 16);
			this->label89->TabIndex = 208;
			this->label89->Text = L")";
			this->label89->Visible = false;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->Location = System::Drawing::Point(144, 171);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(11, 16);
			this->label90->TabIndex = 209;
			this->label90->Text = L")";
			this->label90->Visible = false;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->Location = System::Drawing::Point(144, 150);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(11, 16);
			this->label91->TabIndex = 210;
			this->label91->Text = L")";
			this->label91->Visible = false;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->Location = System::Drawing::Point(144, 287);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(11, 16);
			this->label92->TabIndex = 211;
			this->label92->Text = L")";
			this->label92->Visible = false;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->Location = System::Drawing::Point(144, 264);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(11, 16);
			this->label93->TabIndex = 212;
			this->label93->Text = L")";
			this->label93->Visible = false;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->Location = System::Drawing::Point(144, 241);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(11, 16);
			this->label94->TabIndex = 213;
			this->label94->Text = L")";
			this->label94->Visible = false;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(562, 287);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(11, 16);
			this->label95->TabIndex = 214;
			this->label95->Text = L")";
			this->label95->Visible = false;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->Location = System::Drawing::Point(562, 150);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(11, 16);
			this->label96->TabIndex = 215;
			this->label96->Text = L")";
			this->label96->Visible = false;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->Location = System::Drawing::Point(562, 264);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(11, 16);
			this->label97->TabIndex = 216;
			this->label97->Text = L")";
			this->label97->Visible = false;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->Location = System::Drawing::Point(562, 171);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(11, 16);
			this->label98->TabIndex = 217;
			this->label98->Text = L")";
			this->label98->Visible = false;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->Location = System::Drawing::Point(562, 241);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(11, 16);
			this->label99->TabIndex = 218;
			this->label99->Text = L")";
			this->label99->Visible = false;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->Location = System::Drawing::Point(562, 194);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(11, 16);
			this->label100->TabIndex = 219;
			this->label100->Text = L")";
			this->label100->Visible = false;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label101->Location = System::Drawing::Point(562, 218);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(11, 16);
			this->label101->TabIndex = 220;
			this->label101->Text = L")";
			this->label101->Visible = false;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label102->Location = System::Drawing::Point(109, 147);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(13, 20);
			this->label102->TabIndex = 221;
			this->label102->Text = L";";
			this->label102->Visible = false;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->Location = System::Drawing::Point(109, 261);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(13, 20);
			this->label103->TabIndex = 222;
			this->label103->Text = L";";
			this->label103->Visible = false;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->Location = System::Drawing::Point(109, 167);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(13, 20);
			this->label104->TabIndex = 223;
			this->label104->Text = L";";
			this->label104->Visible = false;
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->Location = System::Drawing::Point(109, 214);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(13, 20);
			this->label105->TabIndex = 224;
			this->label105->Text = L";";
			this->label105->Visible = false;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label106->Location = System::Drawing::Point(109, 190);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(13, 20);
			this->label106->TabIndex = 225;
			this->label106->Text = L";";
			this->label106->Visible = false;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label107->Location = System::Drawing::Point(109, 237);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(13, 20);
			this->label107->TabIndex = 226;
			this->label107->Text = L";";
			this->label107->Visible = false;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label108->Location = System::Drawing::Point(279, 215);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(13, 20);
			this->label108->TabIndex = 227;
			this->label108->Text = L";";
			this->label108->Visible = false;
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label109->Location = System::Drawing::Point(109, 283);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(13, 20);
			this->label109->TabIndex = 228;
			this->label109->Text = L";";
			this->label109->Visible = false;
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label110->Location = System::Drawing::Point(199, 242);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(10, 16);
			this->label110->TabIndex = 229;
			this->label110->Text = L";";
			this->label110->Visible = false;
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label111->Location = System::Drawing::Point(199, 147);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(10, 16);
			this->label111->TabIndex = 230;
			this->label111->Text = L";";
			this->label111->Visible = false;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label112->Location = System::Drawing::Point(199, 218);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(10, 16);
			this->label112->TabIndex = 231;
			this->label112->Text = L";";
			this->label112->Visible = false;
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label113->Location = System::Drawing::Point(199, 172);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(10, 16);
			this->label113->TabIndex = 232;
			this->label113->Text = L";";
			this->label113->Visible = false;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label114->Location = System::Drawing::Point(199, 194);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(10, 16);
			this->label114->TabIndex = 233;
			this->label114->Text = L";";
			this->label114->Visible = false;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label115->Location = System::Drawing::Point(199, 287);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(10, 16);
			this->label115->TabIndex = 234;
			this->label115->Text = L";";
			this->label115->Visible = false;
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label116->Location = System::Drawing::Point(199, 265);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(10, 16);
			this->label116->TabIndex = 235;
			this->label116->Text = L";";
			this->label116->Visible = false;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label117->Location = System::Drawing::Point(279, 191);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(13, 20);
			this->label117->TabIndex = 236;
			this->label117->Text = L";";
			this->label117->Visible = false;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label118->Location = System::Drawing::Point(279, 168);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(13, 20);
			this->label118->TabIndex = 237;
			this->label118->Text = L";";
			this->label118->Visible = false;
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label119->Location = System::Drawing::Point(279, 146);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(13, 20);
			this->label119->TabIndex = 238;
			this->label119->Text = L";";
			this->label119->Visible = false;
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label121->Location = System::Drawing::Point(364, 151);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(10, 16);
			this->label121->TabIndex = 240;
			this->label121->Text = L";";
			this->label121->Visible = false;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label122->Location = System::Drawing::Point(279, 284);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(13, 20);
			this->label122->TabIndex = 241;
			this->label122->Text = L";";
			this->label122->Visible = false;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label123->Location = System::Drawing::Point(279, 261);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(13, 20);
			this->label123->TabIndex = 242;
			this->label123->Text = L";";
			this->label123->Visible = false;
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label124->Location = System::Drawing::Point(279, 238);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(13, 20);
			this->label124->TabIndex = 243;
			this->label124->Text = L";";
			this->label124->Visible = false;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label125->Location = System::Drawing::Point(364, 172);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(10, 16);
			this->label125->TabIndex = 244;
			this->label125->Text = L";";
			this->label125->Visible = false;
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label126->Location = System::Drawing::Point(364, 194);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(10, 16);
			this->label126->TabIndex = 245;
			this->label126->Text = L";";
			this->label126->Visible = false;
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label127->Location = System::Drawing::Point(364, 218);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(10, 16);
			this->label127->TabIndex = 246;
			this->label127->Text = L";";
			this->label127->Visible = false;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label128->Location = System::Drawing::Point(364, 264);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(10, 16);
			this->label128->TabIndex = 247;
			this->label128->Text = L";";
			this->label128->Visible = false;
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label129->Location = System::Drawing::Point(364, 241);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(10, 16);
			this->label129->TabIndex = 248;
			this->label129->Text = L";";
			this->label129->Visible = false;
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label130->Location = System::Drawing::Point(364, 287);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(10, 16);
			this->label130->TabIndex = 249;
			this->label130->Text = L";";
			this->label130->Visible = false;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label131->Location = System::Drawing::Point(443, 147);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(13, 20);
			this->label131->TabIndex = 250;
			this->label131->Text = L";";
			this->label131->Visible = false;
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label132->Location = System::Drawing::Point(443, 168);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(13, 20);
			this->label132->TabIndex = 251;
			this->label132->Text = L";";
			this->label132->Visible = false;
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label133->Location = System::Drawing::Point(533, 284);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(13, 20);
			this->label133->TabIndex = 252;
			this->label133->Text = L";";
			this->label133->Visible = false;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label134->Location = System::Drawing::Point(533, 168);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(13, 20);
			this->label134->TabIndex = 253;
			this->label134->Text = L";";
			this->label134->Visible = false;
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label135->Location = System::Drawing::Point(443, 194);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(13, 20);
			this->label135->TabIndex = 254;
			this->label135->Text = L";";
			this->label135->Visible = false;
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label136->Location = System::Drawing::Point(443, 218);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(13, 20);
			this->label136->TabIndex = 255;
			this->label136->Text = L";";
			this->label136->Visible = false;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label137->Location = System::Drawing::Point(443, 238);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(13, 20);
			this->label137->TabIndex = 256;
			this->label137->Text = L";";
			this->label137->Visible = false;
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label138->Location = System::Drawing::Point(443, 261);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(13, 20);
			this->label138->TabIndex = 257;
			this->label138->Text = L";";
			this->label138->Visible = false;
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label139->Location = System::Drawing::Point(443, 284);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(13, 20);
			this->label139->TabIndex = 258;
			this->label139->Text = L";";
			this->label139->Visible = false;
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label140->Location = System::Drawing::Point(533, 144);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(13, 20);
			this->label140->TabIndex = 259;
			this->label140->Text = L";";
			this->label140->Visible = false;
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label141->Location = System::Drawing::Point(533, 191);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(13, 20);
			this->label141->TabIndex = 260;
			this->label141->Text = L";";
			this->label141->Visible = false;
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label142->Location = System::Drawing::Point(533, 215);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(13, 20);
			this->label142->TabIndex = 261;
			this->label142->Text = L";";
			this->label142->Visible = false;
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label143->Location = System::Drawing::Point(533, 238);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(13, 20);
			this->label143->TabIndex = 262;
			this->label143->Text = L";";
			this->label143->Visible = false;
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label144->Location = System::Drawing::Point(533, 260);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(13, 20);
			this->label144->TabIndex = 263;
			this->label144->Text = L";";
			this->label144->Visible = false;
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label145->Location = System::Drawing::Point(612, 237);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(13, 20);
			this->label145->TabIndex = 264;
			this->label145->Text = L";";
			this->label145->Visible = false;
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label146->Location = System::Drawing::Point(612, 165);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(13, 20);
			this->label146->TabIndex = 265;
			this->label146->Text = L";";
			this->label146->Visible = false;
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label147->Location = System::Drawing::Point(612, 145);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(13, 20);
			this->label147->TabIndex = 266;
			this->label147->Text = L";";
			this->label147->Visible = false;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label148->Location = System::Drawing::Point(612, 214);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(13, 20);
			this->label148->TabIndex = 267;
			this->label148->Text = L";";
			this->label148->Visible = false;
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label149->Location = System::Drawing::Point(612, 191);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(13, 20);
			this->label149->TabIndex = 268;
			this->label149->Text = L";";
			this->label149->Visible = false;
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label150->Location = System::Drawing::Point(612, 261);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(13, 20);
			this->label150->TabIndex = 269;
			this->label150->Text = L";";
			this->label150->Visible = false;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label151->Location = System::Drawing::Point(612, 284);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(13, 20);
			this->label151->TabIndex = 270;
			this->label151->Text = L";";
			this->label151->Visible = false;
			// 
			// Agregar_Relacion
			// 
			this->Agregar_Relacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Agregar_Relacion->Location = System::Drawing::Point(382, 76);
			this->Agregar_Relacion->Name = L"Agregar_Relacion";
			this->Agregar_Relacion->Size = System::Drawing::Size(297, 29);
			this->Agregar_Relacion->TabIndex = 271;
			this->Agregar_Relacion->Text = L"Ingresar elementos para la relación";
			this->Agregar_Relacion->UseVisualStyleBackColor = true;
			this->Agregar_Relacion->Visible = false;
			this->Agregar_Relacion->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// textBox121
			// 
			this->textBox121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox121->Location = System::Drawing::Point(35, 313);
			this->textBox121->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox121->Name = L"textBox121";
			this->textBox121->Size = System::Drawing::Size(412, 23);
			this->textBox121->TabIndex = 272;
			this->textBox121->Visible = false;
			this->textBox121->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox121_TextChanged);
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label120->Location = System::Drawing::Point(8, 317);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(24, 16);
			this->label120->TabIndex = 273;
			this->label120->Text = L"R{";
			this->label120->Visible = false;
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label152->Location = System::Drawing::Point(450, 317);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(13, 16);
			this->label152->TabIndex = 274;
			this->label152->Text = L"}";
			this->label152->Visible = false;
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->Location = System::Drawing::Point(460, 313);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(179, 13);
			this->label153->TabIndex = 275;
			this->label153->Text = L"Aseguresé de escribir correctamente";
			this->label153->Visible = false;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label154->Location = System::Drawing::Point(513, 326);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(85, 13);
			this->label154->TabIndex = 276;
			this->label154->Text = L"(a,b)(a,c)(d,e)";
			this->label154->Visible = false;
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label155->ForeColor = System::Drawing::Color::Red;
			this->label155->Location = System::Drawing::Point(116, 338);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(224, 13);
			this->label155->TabIndex = 277;
			this->label155->Text = L"NO SE RECONOCE LOS ELEMENTOS";
			this->label155->Visible = false;
			// 
			// Matriz_relacion
			// 
			this->Matriz_relacion->Location = System::Drawing::Point(645, 306);
			this->Matriz_relacion->Name = L"Matriz_relacion";
			this->Matriz_relacion->Size = System::Drawing::Size(59, 38);
			this->Matriz_relacion->TabIndex = 278;
			this->Matriz_relacion->Text = L"Mostrar Matriz";
			this->Matriz_relacion->UseVisualStyleBackColor = true;
			this->Matriz_relacion->Visible = false;
			this->Matriz_relacion->Click += gcnew System::EventHandler(this, &MyForm::Matriz_relacion_Click);
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(50, 384);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(13, 13);
			this->label156->TabIndex = 279;
			this->label156->Text = L"4";
			this->label156->Visible = false;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Location = System::Drawing::Point(69, 384);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(13, 13);
			this->label157->TabIndex = 280;
			this->label157->Text = L"4";
			this->label157->Visible = false;
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->Location = System::Drawing::Point(88, 384);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(13, 13);
			this->label158->TabIndex = 281;
			this->label158->Text = L"4";
			this->label158->Visible = false;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->Location = System::Drawing::Point(107, 384);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(13, 13);
			this->label159->TabIndex = 282;
			this->label159->Text = L"4";
			this->label159->Visible = false;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Location = System::Drawing::Point(126, 384);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(13, 13);
			this->label160->TabIndex = 283;
			this->label160->Text = L"4";
			this->label160->Visible = false;
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Location = System::Drawing::Point(145, 384);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(13, 13);
			this->label161->TabIndex = 284;
			this->label161->Text = L"4";
			this->label161->Visible = false;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Location = System::Drawing::Point(164, 384);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(13, 13);
			this->label162->TabIndex = 285;
			this->label162->Text = L"4";
			this->label162->Visible = false;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Location = System::Drawing::Point(164, 406);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(13, 13);
			this->label163->TabIndex = 292;
			this->label163->Text = L"4";
			this->label163->Visible = false;
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->Location = System::Drawing::Point(145, 406);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(13, 13);
			this->label164->TabIndex = 291;
			this->label164->Text = L"4";
			this->label164->Visible = false;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->Location = System::Drawing::Point(126, 406);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(13, 13);
			this->label165->TabIndex = 290;
			this->label165->Text = L"4";
			this->label165->Visible = false;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Location = System::Drawing::Point(107, 406);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(13, 13);
			this->label166->TabIndex = 289;
			this->label166->Text = L"4";
			this->label166->Visible = false;
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->Location = System::Drawing::Point(88, 406);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(13, 13);
			this->label167->TabIndex = 288;
			this->label167->Text = L"4";
			this->label167->Visible = false;
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->Location = System::Drawing::Point(69, 406);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(13, 13);
			this->label168->TabIndex = 287;
			this->label168->Text = L"4";
			this->label168->Visible = false;
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->Location = System::Drawing::Point(50, 406);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(13, 13);
			this->label169->TabIndex = 286;
			this->label169->Text = L"4";
			this->label169->Visible = false;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->Location = System::Drawing::Point(164, 430);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(13, 13);
			this->label170->TabIndex = 299;
			this->label170->Text = L"4";
			this->label170->Visible = false;
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->Location = System::Drawing::Point(145, 430);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(13, 13);
			this->label171->TabIndex = 298;
			this->label171->Text = L"4";
			this->label171->Visible = false;
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->Location = System::Drawing::Point(126, 430);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(13, 13);
			this->label172->TabIndex = 297;
			this->label172->Text = L"4";
			this->label172->Visible = false;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->Location = System::Drawing::Point(107, 430);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(13, 13);
			this->label173->TabIndex = 296;
			this->label173->Text = L"4";
			this->label173->Visible = false;
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->Location = System::Drawing::Point(88, 430);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(13, 13);
			this->label174->TabIndex = 295;
			this->label174->Text = L"4";
			this->label174->Visible = false;
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->Location = System::Drawing::Point(69, 430);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(13, 13);
			this->label175->TabIndex = 294;
			this->label175->Text = L"4";
			this->label175->Visible = false;
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->Location = System::Drawing::Point(50, 430);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(13, 13);
			this->label176->TabIndex = 293;
			this->label176->Text = L"4";
			this->label176->Visible = false;
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Location = System::Drawing::Point(164, 453);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(13, 13);
			this->label177->TabIndex = 306;
			this->label177->Text = L"4";
			this->label177->Visible = false;
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->Location = System::Drawing::Point(145, 453);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(13, 13);
			this->label178->TabIndex = 305;
			this->label178->Text = L"4";
			this->label178->Visible = false;
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->Location = System::Drawing::Point(126, 453);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(13, 13);
			this->label179->TabIndex = 304;
			this->label179->Text = L"4";
			this->label179->Visible = false;
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->Location = System::Drawing::Point(107, 453);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(13, 13);
			this->label180->TabIndex = 303;
			this->label180->Text = L"4";
			this->label180->Visible = false;
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Location = System::Drawing::Point(88, 453);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(13, 13);
			this->label181->TabIndex = 302;
			this->label181->Text = L"4";
			this->label181->Visible = false;
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->Location = System::Drawing::Point(69, 453);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(13, 13);
			this->label182->TabIndex = 301;
			this->label182->Text = L"4";
			this->label182->Visible = false;
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->Location = System::Drawing::Point(50, 453);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(13, 13);
			this->label183->TabIndex = 300;
			this->label183->Text = L"4";
			this->label183->Visible = false;
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->Location = System::Drawing::Point(164, 477);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(13, 13);
			this->label184->TabIndex = 313;
			this->label184->Text = L"4";
			this->label184->Visible = false;
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->Location = System::Drawing::Point(145, 477);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(13, 13);
			this->label185->TabIndex = 312;
			this->label185->Text = L"4";
			this->label185->Visible = false;
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->Location = System::Drawing::Point(126, 477);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(13, 13);
			this->label186->TabIndex = 311;
			this->label186->Text = L"4";
			this->label186->Visible = false;
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->Location = System::Drawing::Point(107, 477);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(13, 13);
			this->label187->TabIndex = 310;
			this->label187->Text = L"4";
			this->label187->Visible = false;
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->Location = System::Drawing::Point(88, 477);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(13, 13);
			this->label188->TabIndex = 309;
			this->label188->Text = L"4";
			this->label188->Visible = false;
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->Location = System::Drawing::Point(69, 477);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(13, 13);
			this->label189->TabIndex = 308;
			this->label189->Text = L"4";
			this->label189->Visible = false;
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->Location = System::Drawing::Point(50, 477);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(13, 13);
			this->label190->TabIndex = 307;
			this->label190->Text = L"4";
			this->label190->Visible = false;
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->Location = System::Drawing::Point(164, 497);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(13, 13);
			this->label191->TabIndex = 320;
			this->label191->Text = L"4";
			this->label191->Visible = false;
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->Location = System::Drawing::Point(145, 497);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(13, 13);
			this->label192->TabIndex = 319;
			this->label192->Text = L"4";
			this->label192->Visible = false;
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->Location = System::Drawing::Point(126, 497);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(13, 13);
			this->label193->TabIndex = 318;
			this->label193->Text = L"4";
			this->label193->Visible = false;
			// 
			// label194
			// 
			this->label194->AutoSize = true;
			this->label194->Location = System::Drawing::Point(107, 497);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(13, 13);
			this->label194->TabIndex = 317;
			this->label194->Text = L"4";
			this->label194->Visible = false;
			// 
			// label195
			// 
			this->label195->AutoSize = true;
			this->label195->Location = System::Drawing::Point(88, 497);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(13, 13);
			this->label195->TabIndex = 316;
			this->label195->Text = L"4";
			this->label195->Visible = false;
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->Location = System::Drawing::Point(69, 497);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(13, 13);
			this->label196->TabIndex = 315;
			this->label196->Text = L"4";
			this->label196->Visible = false;
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->Location = System::Drawing::Point(50, 497);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(13, 13);
			this->label197->TabIndex = 314;
			this->label197->Text = L"4";
			this->label197->Visible = false;
			// 
			// label198
			// 
			this->label198->AutoSize = true;
			this->label198->Location = System::Drawing::Point(164, 519);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(13, 13);
			this->label198->TabIndex = 327;
			this->label198->Text = L"4";
			this->label198->Visible = false;
			// 
			// label199
			// 
			this->label199->AutoSize = true;
			this->label199->Location = System::Drawing::Point(145, 519);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(13, 13);
			this->label199->TabIndex = 326;
			this->label199->Text = L"4";
			this->label199->Visible = false;
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->Location = System::Drawing::Point(126, 519);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(13, 13);
			this->label200->TabIndex = 325;
			this->label200->Text = L"4";
			this->label200->Visible = false;
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->Location = System::Drawing::Point(107, 519);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(13, 13);
			this->label201->TabIndex = 324;
			this->label201->Text = L"4";
			this->label201->Visible = false;
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->Location = System::Drawing::Point(88, 519);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(13, 13);
			this->label202->TabIndex = 323;
			this->label202->Text = L"4";
			this->label202->Visible = false;
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->Location = System::Drawing::Point(69, 519);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(13, 13);
			this->label203->TabIndex = 322;
			this->label203->Text = L"4";
			this->label203->Visible = false;
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->Location = System::Drawing::Point(50, 519);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(13, 13);
			this->label204->TabIndex = 321;
			this->label204->Text = L"4";
			this->label204->Visible = false;
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label205->Location = System::Drawing::Point(4, 425);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(38, 20);
			this->label205->TabIndex = 328;
			this->label205->Text = L"M =";
			this->label205->Visible = false;
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label206->ForeColor = System::Drawing::Color::Blue;
			this->label206->Location = System::Drawing::Point(28, 93);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(14, 13);
			this->label206->TabIndex = 329;
			this->label206->Text = L"a";
			this->label206->Visible = false;
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->BackColor = System::Drawing::Color::Transparent;
			this->label207->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label207->ForeColor = System::Drawing::Color::Blue;
			this->label207->Location = System::Drawing::Point(74, 93);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(14, 13);
			this->label207->TabIndex = 330;
			this->label207->Text = L"b";
			this->label207->Visible = false;
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label208->ForeColor = System::Drawing::Color::Blue;
			this->label208->Location = System::Drawing::Point(126, 93);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(14, 13);
			this->label208->TabIndex = 331;
			this->label208->Text = L"c";
			this->label208->Visible = false;
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label209->ForeColor = System::Drawing::Color::Blue;
			this->label209->Location = System::Drawing::Point(179, 93);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(14, 13);
			this->label209->TabIndex = 332;
			this->label209->Text = L"d";
			this->label209->Visible = false;
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label210->ForeColor = System::Drawing::Color::Blue;
			this->label210->Location = System::Drawing::Point(227, 93);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(14, 13);
			this->label210->TabIndex = 333;
			this->label210->Text = L"e";
			this->label210->Visible = false;
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label211->ForeColor = System::Drawing::Color::Blue;
			this->label211->Location = System::Drawing::Point(280, 93);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(11, 13);
			this->label211->TabIndex = 334;
			this->label211->Text = L"f";
			this->label211->Visible = false;
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label212->ForeColor = System::Drawing::Color::Blue;
			this->label212->Location = System::Drawing::Point(328, 93);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(14, 13);
			this->label212->TabIndex = 335;
			this->label212->Text = L"g";
			this->label212->Visible = false;
			this->label212->Click += gcnew System::EventHandler(this, &MyForm::label212_Click);
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label213->ForeColor = System::Drawing::Color::Green;
			this->label213->Location = System::Drawing::Point(290, 383);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(60, 13);
			this->label213->TabIndex = 336;
			this->label213->Text = L"Reflexiva";
			this->label213->Visible = false;
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label214->ForeColor = System::Drawing::Color::Green;
			this->label214->Location = System::Drawing::Point(290, 406);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(59, 13);
			this->label214->TabIndex = 337;
			this->label214->Text = L"Simetrica";
			this->label214->Visible = false;
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label215->ForeColor = System::Drawing::Color::Green;
			this->label215->Location = System::Drawing::Point(290, 430);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(63, 13);
			this->label215->TabIndex = 338;
			this->label215->Text = L"Transitiva";
			this->label215->Visible = false;
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label216->ForeColor = System::Drawing::Color::Green;
			this->label216->Location = System::Drawing::Point(288, 477);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(74, 13);
			this->label216->TabIndex = 339;
			this->label216->Text = L"Equivalente";
			this->label216->Visible = false;
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->Location = System::Drawing::Point(370, 384);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(47, 13);
			this->label217->TabIndex = 340;
			this->label217->Text = L"label217";
			this->label217->Visible = false;
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->Location = System::Drawing::Point(370, 406);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(47, 13);
			this->label218->TabIndex = 341;
			this->label218->Text = L"label218";
			this->label218->Visible = false;
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->Location = System::Drawing::Point(370, 430);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(47, 13);
			this->label219->TabIndex = 342;
			this->label219->Text = L"label219";
			this->label219->Visible = false;
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->Location = System::Drawing::Point(368, 477);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(47, 13);
			this->label220->TabIndex = 343;
			this->label220->Text = L"label220";
			this->label220->Visible = false;
			// 
			// Diag_Hasse
			// 
			this->Diag_Hasse->Location = System::Drawing::Point(483, 405);
			this->Diag_Hasse->Name = L"Diag_Hasse";
			this->Diag_Hasse->Size = System::Drawing::Size(115, 40);
			this->Diag_Hasse->TabIndex = 344;
			this->Diag_Hasse->Text = L"Mostrar Diagrama de Hasse";
			this->Diag_Hasse->UseVisualStyleBackColor = true;
			this->Diag_Hasse->Visible = false;
			this->Diag_Hasse->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_3);
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label221->Location = System::Drawing::Point(14, 546);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(201, 20);
			this->label221->TabIndex = 346;
			this->label221->Text = L"DIAGRAMA DE HASSE";
			this->label221->Visible = false;
			this->label221->Click += gcnew System::EventHandler(this, &MyForm::label221_Click);
			// 
			// label222
			// 
			this->label222->AutoSize = true;
			this->label222->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label222->ForeColor = System::Drawing::Color::Blue;
			this->label222->Location = System::Drawing::Point(174, 584);
			this->label222->Name = L"label222";
			this->label222->Size = System::Drawing::Size(19, 20);
			this->label222->TabIndex = 347;
			this->label222->Text = L"a";
			this->label222->Visible = false;
			// 
			// label223
			// 
			this->label223->AutoSize = true;
			this->label223->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label223->ForeColor = System::Drawing::Color::Blue;
			this->label223->Location = System::Drawing::Point(70, 617);
			this->label223->Name = L"label223";
			this->label223->Size = System::Drawing::Size(19, 20);
			this->label223->TabIndex = 348;
			this->label223->Text = L"b";
			this->label223->Visible = false;
			// 
			// label224
			// 
			this->label224->AutoSize = true;
			this->label224->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label224->ForeColor = System::Drawing::Color::Blue;
			this->label224->Location = System::Drawing::Point(69, 665);
			this->label224->Name = L"label224";
			this->label224->Size = System::Drawing::Size(19, 20);
			this->label224->TabIndex = 349;
			this->label224->Text = L"d";
			this->label224->Visible = false;
			// 
			// label225
			// 
			this->label225->AutoSize = true;
			this->label225->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label225->ForeColor = System::Drawing::Color::Blue;
			this->label225->Location = System::Drawing::Point(272, 617);
			this->label225->Name = L"label225";
			this->label225->Size = System::Drawing::Size(18, 20);
			this->label225->TabIndex = 350;
			this->label225->Text = L"c";
			this->label225->Visible = false;
			// 
			// label226
			// 
			this->label226->AutoSize = true;
			this->label226->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label226->ForeColor = System::Drawing::Color::Blue;
			this->label226->Location = System::Drawing::Point(209, 700);
			this->label226->Name = L"label226";
			this->label226->Size = System::Drawing::Size(19, 20);
			this->label226->TabIndex = 352;
			this->label226->Text = L"g";
			this->label226->Visible = false;
			// 
			// label227
			// 
			this->label227->AutoSize = true;
			this->label227->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label227->ForeColor = System::Drawing::Color::Blue;
			this->label227->Location = System::Drawing::Point(134, 700);
			this->label227->Name = L"label227";
			this->label227->Size = System::Drawing::Size(15, 20);
			this->label227->TabIndex = 351;
			this->label227->Text = L"f";
			this->label227->Visible = false;
			// 
			// label228
			// 
			this->label228->AutoSize = true;
			this->label228->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label228->ForeColor = System::Drawing::Color::Blue;
			this->label228->Location = System::Drawing::Point(272, 665);
			this->label228->Name = L"label228";
			this->label228->Size = System::Drawing::Size(19, 20);
			this->label228->TabIndex = 353;
			this->label228->Text = L"e";
			this->label228->Visible = false;
			// 
			// label229
			// 
			this->label229->AutoSize = true;
			this->label229->Location = System::Drawing::Point(370, 453);
			this->label229->Name = L"label229";
			this->label229->Size = System::Drawing::Size(47, 13);
			this->label229->TabIndex = 355;
			this->label229->Text = L"label229";
			this->label229->Visible = false;
			// 
			// label230
			// 
			this->label230->AutoSize = true;
			this->label230->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label230->ForeColor = System::Drawing::Color::Green;
			this->label230->Location = System::Drawing::Point(290, 453);
			this->label230->Name = L"label230";
			this->label230->Size = System::Drawing::Size(79, 13);
			this->label230->TabIndex = 354;
			this->label230->Text = L"Antisimétrica";
			this->label230->Visible = false;
			// 
			// label231
			// 
			this->label231->AutoSize = true;
			this->label231->Location = System::Drawing::Point(368, 519);
			this->label231->Name = L"label231";
			this->label231->Size = System::Drawing::Size(47, 13);
			this->label231->TabIndex = 357;
			this->label231->Text = L"label231";
			this->label231->Visible = false;
			this->label231->Click += gcnew System::EventHandler(this, &MyForm::label231_Click);
			// 
			// label232
			// 
			this->label232->AutoSize = true;
			this->label232->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label232->ForeColor = System::Drawing::Color::Green;
			this->label232->Location = System::Drawing::Point(288, 519);
			this->label232->Name = L"label232";
			this->label232->Size = System::Drawing::Size(27, 13);
			this->label232->TabIndex = 356;
			this->label232->Text = L"A|R";
			this->label232->Visible = false;
			this->label232->Click += gcnew System::EventHandler(this, &MyForm::label232_Click);
			// 
			// label233
			// 
			this->label233->AutoSize = true;
			this->label233->Location = System::Drawing::Point(370, 497);
			this->label233->Name = L"label233";
			this->label233->Size = System::Drawing::Size(47, 13);
			this->label233->TabIndex = 359;
			this->label233->Text = L"label233";
			this->label233->Visible = false;
			// 
			// label234
			// 
			this->label234->AutoSize = true;
			this->label234->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label234->ForeColor = System::Drawing::Color::Green;
			this->label234->Location = System::Drawing::Point(286, 497);
			this->label234->Name = L"label234";
			this->label234->Size = System::Drawing::Size(83, 13);
			this->label234->TabIndex = 358;
			this->label234->Text = L"Orden parcial";
			this->label234->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(716, 749);
			this->Controls->Add(this->label233);
			this->Controls->Add(this->label234);
			this->Controls->Add(this->label231);
			this->Controls->Add(this->label232);
			this->Controls->Add(this->label229);
			this->Controls->Add(this->label230);
			this->Controls->Add(this->label228);
			this->Controls->Add(this->label226);
			this->Controls->Add(this->label227);
			this->Controls->Add(this->label225);
			this->Controls->Add(this->label224);
			this->Controls->Add(this->label223);
			this->Controls->Add(this->label222);
			this->Controls->Add(this->label221);
			this->Controls->Add(this->Diag_Hasse);
			this->Controls->Add(this->label220);
			this->Controls->Add(this->label219);
			this->Controls->Add(this->label218);
			this->Controls->Add(this->label217);
			this->Controls->Add(this->label216);
			this->Controls->Add(this->label215);
			this->Controls->Add(this->label214);
			this->Controls->Add(this->label213);
			this->Controls->Add(this->label212);
			this->Controls->Add(this->label211);
			this->Controls->Add(this->label210);
			this->Controls->Add(this->label209);
			this->Controls->Add(this->label208);
			this->Controls->Add(this->label207);
			this->Controls->Add(this->label206);
			this->Controls->Add(this->label205);
			this->Controls->Add(this->label198);
			this->Controls->Add(this->label199);
			this->Controls->Add(this->label200);
			this->Controls->Add(this->label201);
			this->Controls->Add(this->label202);
			this->Controls->Add(this->label203);
			this->Controls->Add(this->label204);
			this->Controls->Add(this->label191);
			this->Controls->Add(this->label192);
			this->Controls->Add(this->label193);
			this->Controls->Add(this->label194);
			this->Controls->Add(this->label195);
			this->Controls->Add(this->label196);
			this->Controls->Add(this->label197);
			this->Controls->Add(this->label184);
			this->Controls->Add(this->label185);
			this->Controls->Add(this->label186);
			this->Controls->Add(this->label187);
			this->Controls->Add(this->label188);
			this->Controls->Add(this->label189);
			this->Controls->Add(this->label190);
			this->Controls->Add(this->label177);
			this->Controls->Add(this->label178);
			this->Controls->Add(this->label179);
			this->Controls->Add(this->label180);
			this->Controls->Add(this->label181);
			this->Controls->Add(this->label182);
			this->Controls->Add(this->label183);
			this->Controls->Add(this->label170);
			this->Controls->Add(this->label171);
			this->Controls->Add(this->label172);
			this->Controls->Add(this->label173);
			this->Controls->Add(this->label174);
			this->Controls->Add(this->label175);
			this->Controls->Add(this->label176);
			this->Controls->Add(this->label163);
			this->Controls->Add(this->label164);
			this->Controls->Add(this->label165);
			this->Controls->Add(this->label166);
			this->Controls->Add(this->label167);
			this->Controls->Add(this->label168);
			this->Controls->Add(this->label169);
			this->Controls->Add(this->label162);
			this->Controls->Add(this->label161);
			this->Controls->Add(this->label160);
			this->Controls->Add(this->label159);
			this->Controls->Add(this->label158);
			this->Controls->Add(this->label157);
			this->Controls->Add(this->label156);
			this->Controls->Add(this->Matriz_relacion);
			this->Controls->Add(this->label155);
			this->Controls->Add(this->label154);
			this->Controls->Add(this->label153);
			this->Controls->Add(this->label152);
			this->Controls->Add(this->label120);
			this->Controls->Add(this->textBox121);
			this->Controls->Add(this->Agregar_Relacion);
			this->Controls->Add(this->label151);
			this->Controls->Add(this->label150);
			this->Controls->Add(this->label149);
			this->Controls->Add(this->label148);
			this->Controls->Add(this->label147);
			this->Controls->Add(this->label146);
			this->Controls->Add(this->label145);
			this->Controls->Add(this->label144);
			this->Controls->Add(this->label143);
			this->Controls->Add(this->label142);
			this->Controls->Add(this->label141);
			this->Controls->Add(this->label140);
			this->Controls->Add(this->label139);
			this->Controls->Add(this->label138);
			this->Controls->Add(this->label137);
			this->Controls->Add(this->label136);
			this->Controls->Add(this->label135);
			this->Controls->Add(this->label134);
			this->Controls->Add(this->label133);
			this->Controls->Add(this->label132);
			this->Controls->Add(this->label131);
			this->Controls->Add(this->label130);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->label128);
			this->Controls->Add(this->label127);
			this->Controls->Add(this->label126);
			this->Controls->Add(this->label125);
			this->Controls->Add(this->label124);
			this->Controls->Add(this->label123);
			this->Controls->Add(this->label122);
			this->Controls->Add(this->label121);
			this->Controls->Add(this->label119);
			this->Controls->Add(this->label118);
			this->Controls->Add(this->label117);
			this->Controls->Add(this->label116);
			this->Controls->Add(this->label115);
			this->Controls->Add(this->label114);
			this->Controls->Add(this->label113);
			this->Controls->Add(this->label112);
			this->Controls->Add(this->label111);
			this->Controls->Add(this->label110);
			this->Controls->Add(this->label109);
			this->Controls->Add(this->label108);
			this->Controls->Add(this->label107);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label104);
			this->Controls->Add(this->label103);
			this->Controls->Add(this->label102);
			this->Controls->Add(this->label101);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->label99);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->label96);
			this->Controls->Add(this->label95);
			this->Controls->Add(this->label94);
			this->Controls->Add(this->label93);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->label91);
			this->Controls->Add(this->label90);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox119);
			this->Controls->Add(this->textBox120);
			this->Controls->Add(this->textBox117);
			this->Controls->Add(this->textBox118);
			this->Controls->Add(this->textBox115);
			this->Controls->Add(this->textBox116);
			this->Controls->Add(this->textBox113);
			this->Controls->Add(this->textBox114);
			this->Controls->Add(this->textBox111);
			this->Controls->Add(this->textBox112);
			this->Controls->Add(this->textBox109);
			this->Controls->Add(this->textBox110);
			this->Controls->Add(this->textBox107);
			this->Controls->Add(this->textBox108);
			this->Controls->Add(this->textBox105);
			this->Controls->Add(this->textBox106);
			this->Controls->Add(this->textBox103);
			this->Controls->Add(this->textBox104);
			this->Controls->Add(this->textBox101);
			this->Controls->Add(this->textBox102);
			this->Controls->Add(this->textBox99);
			this->Controls->Add(this->textBox100);
			this->Controls->Add(this->textBox97);
			this->Controls->Add(this->textBox98);
			this->Controls->Add(this->textBox95);
			this->Controls->Add(this->textBox96);
			this->Controls->Add(this->textBox93);
			this->Controls->Add(this->textBox94);
			this->Controls->Add(this->textBox91);
			this->Controls->Add(this->textBox92);
			this->Controls->Add(this->textBox89);
			this->Controls->Add(this->textBox90);
			this->Controls->Add(this->textBox87);
			this->Controls->Add(this->textBox88);
			this->Controls->Add(this->textBox85);
			this->Controls->Add(this->textBox86);
			this->Controls->Add(this->textBox83);
			this->Controls->Add(this->textBox84);
			this->Controls->Add(this->textBox81);
			this->Controls->Add(this->textBox82);
			this->Controls->Add(this->textBox79);
			this->Controls->Add(this->textBox80);
			this->Controls->Add(this->textBox77);
			this->Controls->Add(this->textBox78);
			this->Controls->Add(this->textBox75);
			this->Controls->Add(this->textBox76);
			this->Controls->Add(this->textBox73);
			this->Controls->Add(this->textBox74);
			this->Controls->Add(this->textBox71);
			this->Controls->Add(this->textBox72);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->textBox70);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->textBox66);
			this->Controls->Add(this->textBox63);
			this->Controls->Add(this->textBox64);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox60);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->textBox54);
			this->Controls->Add(this->textBox51);
			this->Controls->Add(this->textBox52);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->Nuevo_Datos);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->Boton_Mostrar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//LOS STRING SON PARA ALMACENAR LOS VALORES DE LA CAJA DE TEXTO Y COLOCARLOS EN EL PRODUCTO
		//VARIABLES
		String^ a; String^ b; String^ c; String^ d; String^ h; String^ f; String^ g; String^ relacion;
		//
		//
		bool esNumero(String^ txt) {
			/*for (int i = 0; i < txt->Length; i++) {
				if ((!isdigit(txt[i]) )
					|| (txt->Length>1 && txt[0]=='0')
					|| (txt->Length > 1 && txt[0] == '-' && txt[i] == '-' && i!=0)) {
					return false;
				}
			}
			return true;*/
			string str = msclr::interop::marshal_as<string>(txt);
			return regex_match(str, regex("(^-?0\.[0-9]*[1-9]+[0-9]*$)|(^-?[1-9]+[0-9]*((\.[0-9]*[1-9]+[0-9]*$)|(\.[0-9]+)))|(^-?[1-9]+[0-9]*$)|(^0$){1}"));
		}
		bool numeroEntre4y7(String^ txt) {
			if (Convert::ToInt32(txt) >= 4 && Convert::ToInt32(txt) <= 7)
			{
				return true;
			}
			return false;

		}

		bool esLetra(String^ txt) {
			if (!isalpha(txt[0]) || txt->Length != 1) {
				return false;
			}
			return true;

		}
		String^ generarLetra() {
			String^ alphabet = L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
			String^ result = "";
			result += alphabet[rand() % alphabet->Length];
			return result;

		}
		String^ generarNumero() {
			String^ numeros = L"0123456789";
			int n = rand() % 3 + 1;
			String^ result = "";
			for (int i = 0; i < n; i++) {
				int t = rand() % numeros->Length;
				if (i == 0)result += numeros[t == 0 ? 1 : t];
				else result += numeros[rand() % numeros->Length];

			}
			return result;

		}
		String^ generarText() {
			int n = rand() % 10;
			String^ result = L"";
			if (n % 2 == 0)result = generarNumero();
			else result = generarLetra();
			return result;
		}
		void ocultarTxts() {
			textBox2->Visible = false;
			textBox3->Visible = false;
			textBox4->Visible = false;
			textBox5->Visible = false;
			textBox6->Visible = false;
			textBox7->Visible = false;
			textBox8->Visible = false;
			label206->Visible = false; label207->Visible = false; label208->Visible = false; label209->Visible = false; label210->Visible = false; label211->Visible = false; label212->Visible = false;
			//Todo lo que tiene que ver con Matriz Boleana
			label120->Visible = false;	label152->Visible = false; label153->Visible = false;	label154->Visible = false;	label155->Visible = false;
			label156->Visible = false;	label157->Visible = false;	label158->Visible = false;	label159->Visible = false;
			label160->Visible = false;	label161->Visible = false;	label162->Visible = false;	label162->Visible = false;
			label163->Visible = false;	label164->Visible = false;	label165->Visible = false;	label166->Visible = false;
			label167->Visible = false;	label168->Visible = false;	label169->Visible = false;	label170->Visible = false;
			label171->Visible = false;	label172->Visible = false;	label173->Visible = false;	label174->Visible = false;
			label175->Visible = false;	label176->Visible = false;	label177->Visible = false;	label178->Visible = false;
			label179->Visible = false;	label180->Visible = false;	label181->Visible = false;	label182->Visible = false;
			label183->Visible = false;	label184->Visible = false;	label185->Visible = false;	label186->Visible = false;
			label187->Visible = false;	label188->Visible = false;	label189->Visible = false;	label190->Visible = false;
			label191->Visible = false;	label192->Visible = false;	label193->Visible = false;	label194->Visible = false;
			label195->Visible = false;	label196->Visible = false;	label197->Visible = false;	label198->Visible = false;
			label199->Visible = false;	label200->Visible = false;	label201->Visible = false;	label202->Visible = false;
			label202->Visible = false;	label203->Visible = false;	label204->Visible = false;	label205->Visible = false;

			//Clasificacion
			label213->Visible = false; label214->Visible = false; label215->Visible = false; label216->Visible = false; label217->Visible = false; label218->Visible = false; label219->Visible = false; label220->Visible = false;
			label233->Visible = false; label234->Visible = false;
			textBox121->Visible = false;
			Matriz_relacion->Visible = false;
			label221->Visible = false;

		}
		void resetTxts() {
			setTxtsTrue();
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox5->Text = L"";
			textBox6->Text = L"";
			textBox7->Text = L"";
			textBox8->Text = L"";
			textBox121->Text = L"";
			textBox121->Enabled = true;
			Matriz_relacion->Enabled = true;
			Agregar_Relacion->Enabled = true;
			textBox2->BackColor = System::Drawing::Color::White;
			textBox3->BackColor = System::Drawing::Color::White;
			textBox4->BackColor = System::Drawing::Color::White;
			textBox5->BackColor = System::Drawing::Color::White;
			textBox6->BackColor = System::Drawing::Color::White;
			textBox7->BackColor = System::Drawing::Color::White;
			textBox8->BackColor = System::Drawing::Color::White;
			label3->Visible = false;

			a = b = c = d = h = f = g = "";
		}
		void setTxtsTrue() {
			txt1Valido = true;
			txt2Valido = true;
			txt3Valido = true;
			txt4Valido = true;
			txt5Valido = true;
			txt6Valido = true;
			txt7Valido = true;
		}
		//La FUNCION SETTRUEP - CAMBIA EL VALOR DE BOOL DE LAS CAJAS DE TEXTO Y LABEL DEL PRODUCTO -ES PARA ESCONDER Y MOSTRAR 
		//TIENE 500 LINEAS
		void setTrueP() {
			if (textBox1->Text == "") {
				textBox9->Visible = false;
				textBox10->Visible = false;
				textBox11->Visible = false;
				textBox12->Visible = false;
				textBox13->Visible = false;
				textBox14->Visible = false;
				textBox15->Visible = false;
				textBox16->Visible = false;
				textBox17->Visible = false;
				textBox18->Visible = false;
				textBox19->Visible = false;
				textBox20->Visible = false;
				textBox21->Visible = false;
				textBox22->Visible = false;

				textBox23->Visible = false;
				textBox24->Visible = false;
				textBox25->Visible = false;
				textBox26->Visible = false;
				textBox27->Visible = false;
				textBox28->Visible = false;
				textBox29->Visible = false;
				textBox30->Visible = false;
				textBox31->Visible = false;
				textBox32->Visible = false;
				textBox33->Visible = false;
				textBox34->Visible = false;
				textBox35->Visible = false;
				textBox36->Visible = false;
				textBox37->Visible = false;
				textBox38->Visible = false;
				textBox39->Visible = false;
				textBox40->Visible = false;
				textBox41->Visible = false;
				textBox42->Visible = false;
				textBox43->Visible = false;
				textBox44->Visible = false;
				textBox45->Visible = false;
				textBox46->Visible = false;
				textBox47->Visible = false;
				textBox48->Visible = false;
				textBox49->Visible = false;
				textBox50->Visible = false;
				textBox51->Visible = false;
				textBox52->Visible = false;
				textBox53->Visible = false;
				textBox54->Visible = false;
				textBox55->Visible = false;
				textBox56->Visible = false;
				textBox57->Visible = false;
				textBox58->Visible = false;
				textBox59->Visible = false;
				textBox60->Visible = false;
				textBox61->Visible = false;
				textBox62->Visible = false;
				textBox63->Visible = false;
				textBox64->Visible = false;
				textBox65->Visible = false;
				textBox66->Visible = false;
				textBox67->Visible = false;
				textBox68->Visible = false;
				textBox69->Visible = false;
				textBox70->Visible = false;
				textBox71->Visible = false;
				textBox72->Visible = false;
				textBox73->Visible = false;
				textBox74->Visible = false;
				textBox75->Visible = false;
				textBox76->Visible = false;
				textBox77->Visible = false;
				textBox78->Visible = false;
				textBox79->Visible = false;
				textBox80->Visible = false;
				textBox81->Visible = false;
				textBox82->Visible = false;
				textBox83->Visible = false;
				textBox84->Visible = false;
				textBox85->Visible = false;
				textBox86->Visible = false;
				textBox87->Visible = false;
				textBox88->Visible = false;
				textBox89->Visible = false;
				textBox90->Visible = false;
				textBox91->Visible = false;
				textBox92->Visible = false;
				textBox93->Visible = false;
				textBox94->Visible = false;
				textBox95->Visible = false;
				textBox96->Visible = false;
				textBox97->Visible = false;
				textBox98->Visible = false;
				textBox99->Visible = false;
				textBox100->Visible = false;
				textBox101->Visible = false;
				textBox102->Visible = false;
				textBox103->Visible = false;
				textBox104->Visible = false;
				textBox105->Visible = false;
				textBox106->Visible = false;
				textBox107->Visible = false;
				textBox108->Visible = false;
				textBox109->Visible = false;
				textBox110->Visible = false;
				textBox111->Visible = false;
				textBox112->Visible = false;
				textBox113->Visible = false;
				textBox114->Visible = false;
				textBox115->Visible = false;
				textBox116->Visible = false;
				textBox117->Visible = false;
				textBox118->Visible = false;
				textBox119->Visible = false;
				textBox120->Visible = false;

				label4->Visible = false;
				label5->Visible = false;
				label6->Visible = false;
				label7->Visible = false;
				label8->Visible = false;
				label9->Visible = false;
				label10->Visible = false;
				label11->Visible = false;
				label12->Visible = false;
				label13->Visible = false;
				label14->Visible = false;
				label15->Visible = false;
				label16->Visible = false;
				label17->Visible = false;
				label18->Visible = false;
				label19->Visible = false;
				label20->Visible = false;
				label21->Visible = false;
				label22->Visible = false;
				label23->Visible = false;
				label24->Visible = false;
				label25->Visible = false;
				label26->Visible = false;
				label27->Visible = false;
				label28->Visible = false;
				label29->Visible = false;
				label30->Visible = false;
				label31->Visible = false;
				label32->Visible = false;
				label33->Visible = false;
				label34->Visible = false;
				label35->Visible = false;
				label36->Visible = false;
				label37->Visible = false;
				label38->Visible = false;
				label39->Visible = false;
				label40->Visible = false;
				label41->Visible = false;
				label42->Visible = false;
				label43->Visible = false;
				label44->Visible = false;
				label45->Visible = false;
				label46->Visible = false;
				label47->Visible = false;
				label48->Visible = false;
				label49->Visible = false;
				label50->Visible = false;
				label51->Visible = false;
				label52->Visible = false;
				label53->Visible = false;
				label54->Visible = false;
				label55->Visible = false;
				label56->Visible = false;
				label57->Visible = false;
				label58->Visible = false;
				label59->Visible = false;
				label60->Visible = false;
				label61->Visible = false;
				label62->Visible = false;
				label63->Visible = false;
				label64->Visible = false;
				label65->Visible = false;
				label66->Visible = false;
				label67->Visible = false;
				label68->Visible = false;
				label69->Visible = false;
				label70->Visible = false;
				label71->Visible = false;
				label72->Visible = false;
				label73->Visible = false;
				label74->Visible = false;
				label75->Visible = false;
				label76->Visible = false;
				label77->Visible = false;
				label78->Visible = false;
				label79->Visible = false;
				label80->Visible = false;
				label81->Visible = false;
				label82->Visible = false;
				label83->Visible = false;
				label84->Visible = false;
				label85->Visible = false;
				label86->Visible = false;
				label87->Visible = false;
				label88->Visible = false;
				label89->Visible = false;
				label90->Visible = false;
				label91->Visible = false;
				label92->Visible = false;
				label93->Visible = false;
				label94->Visible = false;
				label95->Visible = false;
				label96->Visible = false;
				label97->Visible = false;
				label98->Visible = false;
				label99->Visible = false;
				label100->Visible = false;
				label101->Visible = false;
				label102->Visible = false;
				label103->Visible = false;
				label104->Visible = false;
				label105->Visible = false;
				label106->Visible = false;
				label107->Visible = false;
				label108->Visible = false;
				label109->Visible = false;
				label110->Visible = false;
				label111->Visible = false;
				label112->Visible = false;
				label113->Visible = false;
				label114->Visible = false;
				label115->Visible = false;
				label116->Visible = false;
				label117->Visible = false;
				label118->Visible = false;
				label119->Visible = false;
				label121->Visible = false;
				label122->Visible = false;
				label123->Visible = false;
				label124->Visible = false;
				label125->Visible = false;
				label126->Visible = false;
				label127->Visible = false;
				label128->Visible = false;
				label129->Visible = false;
				label130->Visible = false;
				label131->Visible = false;
				label132->Visible = false;
				label133->Visible = false;
				label134->Visible = false;
				label135->Visible = false;
				label136->Visible = false;
				label137->Visible = false;
				label138->Visible = false;
				label139->Visible = false;
				label140->Visible = false;
				label141->Visible = false;
				label142->Visible = false;
				label143->Visible = false;
				label144->Visible = false;
				label145->Visible = false;
				label146->Visible = false;
				label147->Visible = false;
				label148->Visible = false;
				label149->Visible = false;
				label150->Visible = false;
				label151->Visible = false;

			}
			else {
				textBox9->Visible = true;
				textBox10->Visible = true;
				textBox11->Visible = true;
				textBox12->Visible = true;
				if (Convert::ToInt32(textBox1->Text) > 4) {
					textBox13->Visible = true; textBox20->Visible = true; textBox79->Visible = true;
					textBox80->Visible = true;
					textBox81->Visible = true;
					textBox82->Visible = true;
					textBox83->Visible = true;
					textBox84->Visible = true;
					textBox85->Visible = true;
					textBox86->Visible = true;
					textBox87->Visible = true;
					textBox88->Visible = true;

					textBox31->Visible = true;
					textBox32->Visible = true;

					textBox45->Visible = true;
					textBox46->Visible = true;

					textBox59->Visible = true;
					textBox60->Visible = true;

					textBox73->Visible = true;
					textBox74->Visible = true;

					label8->Visible = true;
					label22->Visible = true;

					label32->Visible = true;
					label33->Visible = true;
					label34->Visible = true;
					label35->Visible = true;
					label36->Visible = true;
					label57->Visible = true;
					label65->Visible = true;
					label68->Visible = true;
					label69->Visible = true;
					label70->Visible = true;
					label71->Visible = true;
					label72->Visible = true;
					label87->Visible = true;
					label94->Visible = true;
					label107->Visible = true;
					label110->Visible = true;
					label124->Visible = true;
					label129->Visible = true;
					label137->Visible = true;
					label135->Visible = true;
					label136->Visible = true;
					label131->Visible = true;
					label132->Visible = true;
					label15->Visible = true;
					label29->Visible = true;



				}
				if (Convert::ToInt32(textBox1->Text) > 5) {
					textBox14->Visible = true; textBox21->Visible = true; textBox93->Visible = true;
					textBox94->Visible = true;
					textBox95->Visible = true;
					textBox96->Visible = true;
					textBox97->Visible = true;
					textBox98->Visible = true;
					textBox99->Visible = true;
					textBox100->Visible = true;
					textBox101->Visible = true;
					textBox102->Visible = true;
					textBox103->Visible = true;
					textBox104->Visible = true;

					textBox33->Visible = true;
					textBox34->Visible = true;

					textBox47->Visible = true;
					textBox48->Visible = true;

					textBox61->Visible = true;
					textBox62->Visible = true;

					textBox75->Visible = true;
					textBox76->Visible = true;

					textBox89->Visible = true;
					textBox90->Visible = true;
					label39->Visible = true;
					label40->Visible = true;
					label41->Visible = true;
					label42->Visible = true;
					label43->Visible = true;
					label44->Visible = true;
					label96->Visible = true;
					label97->Visible = true;
					label98->Visible = true;
					label99->Visible = true;
					label100->Visible = true;
					label101->Visible = true;
					label9->Visible = true;
					label16->Visible = true;

					label93->Visible = true;
					label85->Visible = true;
					label23->Visible = true;
					label23->Visible = true;
					label30->Visible = true;
					label37->Visible = true;
					label66->Visible = true;
					label73->Visible = true;
					label103->Visible = true;
					label116->Visible = true;
					label123->Visible = true;
					label128->Visible = true;
					label138->Visible = true;
					label140->Visible = true;
					label141->Visible = true;
					label142->Visible = true;
					label143->Visible = true;
					label144->Visible = true;
					label134->Visible = true;
					label56->Visible = true;
					label30->Visible = true;
					label23->Visible = true;
					label59->Visible = true;

				}
				if (Convert::ToInt32(textBox1->Text) > 6) {
					textBox15->Visible = true; textBox22->Visible = true; textBox107->Visible = true;
					textBox108->Visible = true;
					textBox109->Visible = true;
					textBox110->Visible = true;
					textBox111->Visible = true;
					textBox112->Visible = true;
					textBox113->Visible = true;
					textBox114->Visible = true;
					textBox115->Visible = true;
					textBox116->Visible = true;
					textBox117->Visible = true;
					textBox118->Visible = true;
					textBox119->Visible = true;
					textBox120->Visible = true;

					textBox35->Visible = true;
					textBox36->Visible = true;

					textBox49->Visible = true;
					textBox50->Visible = true;

					textBox63->Visible = true;
					textBox64->Visible = true;

					textBox77->Visible = true;
					textBox78->Visible = true;


					textBox91->Visible = true;
					textBox92->Visible = true;

					textBox105->Visible = true;
					textBox106->Visible = true;
					label46->Visible = true;
					label47->Visible = true;
					label48->Visible = true;
					label49->Visible = true;
					label50->Visible = true;
					label51->Visible = true;
					label52->Visible = true;
					label75->Visible = true;
					label76->Visible = true;
					label77->Visible = true;
					label78->Visible = true;
					label79->Visible = true;
					label80->Visible = true;
					label81->Visible = true;
					label17->Visible = true;
					label92->Visible = true;
					label84->Visible = true;
					label24->Visible = true;
					label60->Visible = true;
					label31->Visible = true;
					label67->Visible = true;
					label38->Visible = true;
					label74->Visible = true;
					label45->Visible = true;
					label95->Visible = true;
					label10->Visible = true;
					label77->Visible = true;
					label145->Visible = true;
					label146->Visible = true;
					label147->Visible = true;
					label148->Visible = true;
					label149->Visible = true;
					label150->Visible = true;
					label151->Visible = true;
					label109->Visible = true;
					label115->Visible = true;
					label122->Visible = true;

					label130->Visible = true;
					label133->Visible = true;
					label139->Visible = true;

				}
				// CAJAS DE TEXTO - Producto
				textBox16->Visible = true;
				textBox17->Visible = true;
				textBox18->Visible = true;
				textBox19->Visible = true;

				textBox23->Visible = true;
				textBox24->Visible = true;
				textBox25->Visible = true;
				textBox26->Visible = true;
				textBox27->Visible = true;
				textBox28->Visible = true;
				textBox29->Visible = true;
				textBox30->Visible = true;



				textBox37->Visible = true;
				textBox38->Visible = true;
				textBox39->Visible = true;
				textBox40->Visible = true;
				textBox41->Visible = true;
				textBox42->Visible = true;
				textBox43->Visible = true;
				textBox44->Visible = true;



				textBox51->Visible = true;
				textBox52->Visible = true;
				textBox53->Visible = true;
				textBox54->Visible = true;
				textBox55->Visible = true;
				textBox56->Visible = true;
				textBox57->Visible = true;
				textBox58->Visible = true;



				textBox65->Visible = true;
				textBox66->Visible = true;
				textBox67->Visible = true;
				textBox68->Visible = true;
				textBox69->Visible = true;
				textBox70->Visible = true;
				textBox71->Visible = true;
				textBox72->Visible = true;

				//SIGNOS (; )
				label5->Visible = true;
				label4->Visible = true;
				label6->Visible = true;
				label7->Visible = true;
				label11->Visible = true;
				label12->Visible = true;
				label13->Visible = true;
				label14->Visible = true;
				label18->Visible = true;
				label19->Visible = true;
				label20->Visible = true;
				label21->Visible = true;
				label25->Visible = true;
				label26->Visible = true;
				label27->Visible = true;
				label28->Visible = true;




				label53->Visible = true;
				label54->Visible = true;
				label55->Visible = true;
				label56->Visible = true;
				label58->Visible = true;
				label61->Visible = true;
				label62->Visible = true;
				label63->Visible = true;
				label64->Visible = true;



				label82->Visible = true;
				label83->Visible = true;
				label86->Visible = true;
				label88->Visible = true;
				label89->Visible = true;
				label90->Visible = true;
				label91->Visible = true;

				label102->Visible = true;
				label104->Visible = true;
				label105->Visible = true;
				label106->Visible = true;
				label108->Visible = true;
				label111->Visible = true;
				label112->Visible = true;
				label113->Visible = true;
				label114->Visible = true;
				label117->Visible = true;
				label118->Visible = true;
				label119->Visible = true;
				label121->Visible = true;
				label125->Visible = true;
				label126->Visible = true;
				label127->Visible = true;






			}

		}
		bool sonTxtxValidos() {
			return txt1Valido && txt2Valido && txt3Valido && txt4Valido && txt5Valido && txt6Valido && txt7Valido;
		}

		//CODE DE MATRIZ
		void mostrarMatrizR() {
			label120->Visible = true;	label152->Visible = true; label153->Visible = true;	label154->Visible = true;
			label156->Visible = true;	label157->Visible = true;	label158->Visible = true;
			label159->Visible = true; label166->Visible = true; label167->Visible = true;	label168->Visible = true;
			label169->Visible = true;	label173->Visible = true;	label174->Visible = true; label175->Visible = true;
			label176->Visible = true; label180->Visible = true;	label181->Visible = true;	label182->Visible = true;
			label183->Visible = true;
			label213->Visible = true; label214->Visible = true; label215->Visible = true; label216->Visible = true; label217->Visible = true; label218->Visible = true; label219->Visible = true; label220->Visible = true; label230->Visible = true; label229->Visible = true; label229->Visible = true;
			if (Convert::ToInt32(textBox1->Text) > 4) {
				if (Convert::ToInt32(textBox1->Text) > 5) {
					if (Convert::ToInt32(textBox1->Text) > 6) {
						label162->Visible = true; label163->Visible = true; label170->Visible = true; label177->Visible = true;	label184->Visible = true; label191->Visible = true; label198->Visible = true; label199->Visible = true;	label200->Visible = true;	label201->Visible = true;	label202->Visible = true;	label202->Visible = true;	label203->Visible = true;	label204->Visible = true;
					}
					label161->Visible = true; label164->Visible = true; label171->Visible = true; label178->Visible = true; label185->Visible = true; label192->Visible = true; label193->Visible = true;	label194->Visible = true;	label195->Visible = true;	label196->Visible = true;	label197->Visible = true;
				}
				label160->Visible = true; label165->Visible = true; label172->Visible = true; label179->Visible = true; label186->Visible = true; label190->Visible = true; label187->Visible = true;	label188->Visible = true;	label189->Visible = true;
			}
		}
		bool validarRelacion_4(String^ relacion) {
			string str = msclr::interop::marshal_as<string>(relacion);

			vector<char> pila;
			int parentesis_abiertos = 0;
			bool dentro_de_parentesis = false;

			bool en_valor = false;
			string valor_actual;

			int relaciones = 0;

			for (char c : str) {
				if (c == '(') {
					pila.push_back(c);
					parentesis_abiertos++;
					dentro_de_parentesis = true;

				}
				else if (c == ')') {
					if (pila.empty() || pila.back() != '(') {
						return false;
					}
					pila.pop_back();
					parentesis_abiertos--;
					dentro_de_parentesis = (parentesis_abiertos > 0);
				}
				else if (c == ',') {
					if (!dentro_de_parentesis || parentesis_abiertos != 1) {
						return false;
					}
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'd') {
						return false;
					}
					valor_actual.clear();
				}
				else {
					en_valor = true;
					valor_actual += c;
				}
				if (!dentro_de_parentesis && en_valor) {
					en_valor = false;
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'd') {
						return false;
					}
					valor_actual.clear();
					relaciones++;
				}
			}
			return (relaciones > 0);
		}
		bool validarRelacion_5(String^ relacion) {
			string str = msclr::interop::marshal_as<string>(relacion);

			vector<char> pila;
			int parentesis_abiertos = 0;
			bool dentro_de_parentesis = false;

			bool en_valor = false;
			string valor_actual;

			int relaciones = 0;

			for (char c : str) {
				if (c == '(') {

					pila.push_back(c);
					parentesis_abiertos++;
					dentro_de_parentesis = true;
				}
				else if (c == ')') {
					if (pila.empty() || pila.back() != '(') {
						return false;
					}
					pila.pop_back();
					parentesis_abiertos--;
					dentro_de_parentesis = (parentesis_abiertos > 0);
				}
				else if (c == ',') {
					if (!dentro_de_parentesis || parentesis_abiertos != 1) {
						return false;
					}
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'e') {
						return false;
					}
					valor_actual.clear();
				}
				else {
					en_valor = true;
					valor_actual += c;
				}
				if (!dentro_de_parentesis && en_valor) {
					en_valor = false;
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'e') {
						return false;
					}
					valor_actual.clear();
					relaciones++;
				}
			}
			return (relaciones > 0);
		}
		bool validarRelacion_6(String^ relacion) {
			string str = msclr::interop::marshal_as<string>(relacion);

			vector<char> pila;
			int parentesis_abiertos = 0;
			bool dentro_de_parentesis = false;

			bool en_valor = false;
			string valor_actual;

			int relaciones = 0;

			for (char c : str) {
				if (c == '(') {

					pila.push_back(c);
					parentesis_abiertos++;
					dentro_de_parentesis = true;
				}
				else if (c == ')') {
					if (pila.empty() || pila.back() != '(') {
						return false;
					}
					pila.pop_back();
					parentesis_abiertos--;
					dentro_de_parentesis = (parentesis_abiertos > 0);
				}
				else if (c == ',') {
					if (!dentro_de_parentesis || parentesis_abiertos != 1) {
						return false;
					}
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'f') {
						return false;
					}
					valor_actual.clear();
				}
				else {
					en_valor = true;
					valor_actual += c;
				}
				if (!dentro_de_parentesis && en_valor) {
					en_valor = false;
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'f') {
						return false;
					}
					valor_actual.clear();
					relaciones++;
				}
			}
			return (relaciones > 0);
		}
		bool validarRelacion_7(String^ relacion) {
			string str = msclr::interop::marshal_as<string>(relacion);

			vector<char> pila;
			int parentesis_abiertos = 0;
			bool dentro_de_parentesis = false;

			bool en_valor = false;
			string valor_actual;

			int relaciones = 0;

			for (char c : str) {
				if (c == '(') {

					pila.push_back(c);
					parentesis_abiertos++;
					dentro_de_parentesis = true;
				}
				else if (c == ')') {
					if (pila.empty() || pila.back() != '(') {
						return false;
					}
					pila.pop_back();
					parentesis_abiertos--;
					dentro_de_parentesis = (parentesis_abiertos > 0);
				}
				else if (c == ',') {
					if (!dentro_de_parentesis || parentesis_abiertos != 1) {
						return false;
					}
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'g') {
						return false;
					}
					valor_actual.clear();
				}
				else {
					en_valor = true;
					valor_actual += c;
				}
				if (!dentro_de_parentesis && en_valor) {
					en_valor = false;
					if (valor_actual.length() == 0) {
						return false;
					}
					if (valor_actual[0] < 'a' || valor_actual[0] > 'g') {
						return false;
					}
					valor_actual.clear();
					relaciones++;
				}
			}
			return (relaciones > 0);
		}
		void generarMatriz(String^ relaciones, bool relaciones_bool[7][7]) {
			// Inicializar la matriz con falsos
			for (int i = 0; i < 7; i++) {
				for (int j = 0; j < 7; j++) {
					relaciones_bool[i][j] = false;
				}
			}

			// Guardar las variables del conjunto A en un arreglo
			char variables[7] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };

			// Convertir las relaciones en variables booleanas y guardarlas en la matriz
			int i = 0;
			while (i < relaciones->Length) {
				if (relaciones[i] >= 'a' && relaciones[i] <= 'g') {
					// Obtener los valores de las variables en la relación
					char c1 = static_cast<char>(relaciones[i]);
					i++;
					i++; // Saltar el guion
					char c2 = static_cast<char>(relaciones[i]);
					i++;

					// Obtener los índices de las variables en el arreglo de variables
					int index1 = c1 - 'a';
					int index2 = c2 - 'a';

					// Establecer la variable booleana correspondiente a true
					relaciones_bool[index1][index2] = true;
				}
				else {
					i++;
				}
			}

			//escribir las matriz
			if (relaciones_bool[0][0]) { label156->Text = "1"; }
			else { label156->Text = "0"; }
			if (relaciones_bool[0][1]) { label157->Text = "1"; }
			else { label157->Text = "0"; }
			if (relaciones_bool[0][2]) { label158->Text = "1"; }
			else { label158->Text = "0"; }
			if (relaciones_bool[0][3]) { label159->Text = "1"; }
			else { label159->Text = "0"; }
			if (relaciones_bool[0][4]) { label160->Text = "1"; }
			else { label160->Text = "0"; }
			if (relaciones_bool[0][5]) { label161->Text = "1"; }
			else { label161->Text = "0"; }
			if (relaciones_bool[0][6]) { label162->Text = "1"; }
			else { label162->Text = "0"; }
			if (relaciones_bool[1][0]) { label169->Text = "1"; }
			else { label169->Text = "0"; }
			if (relaciones_bool[1][1]) { label168->Text = "1"; }
			else { label168->Text = "0"; }
			if (relaciones_bool[1][2]) { label167->Text = "1"; }
			else { label167->Text = "0"; }
			if (relaciones_bool[1][3]) { label166->Text = "1"; }
			else { label166->Text = "0"; }
			if (relaciones_bool[1][4]) { label165->Text = "1"; }
			else { label165->Text = "0"; }
			if (relaciones_bool[1][5]) { label164->Text = "1"; }
			else { label164->Text = "0"; }
			if (relaciones_bool[1][6]) { label163->Text = "1"; }
			else { label163->Text = "0"; }
			if (relaciones_bool[2][0]) { label176->Text = "1"; }
			else { label176->Text = "0"; }
			if (relaciones_bool[2][1]) { label175->Text = "1"; }
			else { label175->Text = "0"; }
			if (relaciones_bool[2][2]) { label174->Text = "1"; }
			else { label174->Text = "0"; }
			if (relaciones_bool[2][3]) { label173->Text = "1"; }
			else { label173->Text = "0"; }
			if (relaciones_bool[2][4]) { label172->Text = "1"; }
			else { label172->Text = "0"; }
			if (relaciones_bool[2][5]) { label171->Text = "1"; }
			else { label171->Text = "0"; }
			if (relaciones_bool[2][6]) { label170->Text = "1"; }
			else { label170->Text = "0"; }
			if (relaciones_bool[3][0]) { label183->Text = "1"; }
			else { label183->Text = "0"; }
			if (relaciones_bool[3][1]) { label182->Text = "1"; }
			else { label182->Text = "0"; }
			if (relaciones_bool[3][2]) { label181->Text = "1"; }
			else { label181->Text = "0"; }
			if (relaciones_bool[3][3]) { label180->Text = "1"; }
			else { label180->Text = "0"; }
			if (relaciones_bool[3][4]) { label179->Text = "1"; }
			else { label179->Text = "0"; }
			if (relaciones_bool[3][5]) { label178->Text = "1"; }
			else { label178->Text = "0"; }
			if (relaciones_bool[3][6]) { label177->Text = "1"; }
			else { label177->Text = "0"; }
			if (relaciones_bool[4][0]) { label190->Text = "1"; }
			else { label190->Text = "0"; }
			if (relaciones_bool[4][1]) { label189->Text = "1"; }
			else { label189->Text = "0"; }
			if (relaciones_bool[4][2]) { label188->Text = "1"; }
			else { label188->Text = "0"; }
			if (relaciones_bool[4][3]) { label187->Text = "1"; }
			else { label187->Text = "0"; }
			if (relaciones_bool[4][4]) { label186->Text = "1"; }
			else { label186->Text = "0"; }
			if (relaciones_bool[4][5]) { label185->Text = "1"; }
			else { label185->Text = "0"; }
			if (relaciones_bool[4][6]) { label184->Text = "1"; }
			else { label184->Text = "0"; }
			if (relaciones_bool[5][0]) { label197->Text = "1"; }
			else { label197->Text = "0"; }
			if (relaciones_bool[5][1]) { label196->Text = "1"; }
			else { label196->Text = "0"; }
			if (relaciones_bool[5][2]) { label195->Text = "1"; }
			else { label195->Text = "0"; }
			if (relaciones_bool[5][3]) { label194->Text = "1"; }
			else { label194->Text = "0"; }
			if (relaciones_bool[5][4]) { label193->Text = "1"; }
			else { label193->Text = "0"; }
			if (relaciones_bool[5][5]) { label192->Text = "1"; }
			else { label192->Text = "0"; }
			if (relaciones_bool[5][6]) { label191->Text = "1"; }
			else { label191->Text = "0"; }
			if (relaciones_bool[6][0]) { label204->Text = "1"; }
			else { label204->Text = "0"; }
			if (relaciones_bool[6][1]) { label203->Text = "1"; }
			else { label203->Text = "0"; }
			if (relaciones_bool[6][2]) { label202->Text = "1"; }
			else { label202->Text = "0"; }
			if (relaciones_bool[6][3]) { label201->Text = "1"; }
			else { label201->Text = "0"; }
			if (relaciones_bool[6][4]) { label200->Text = "1"; }
			else { label200->Text = "0"; }
			if (relaciones_bool[6][5]) { label199->Text = "1"; }
			else { label199->Text = "0"; }
			if (relaciones_bool[6][6]) { label198->Text = "1"; }
			else { label198->Text = "0"; }
		}

		//CODE PARA CLASIFICAR
		String^ arReflexivo = "";
		String^ arTransitivo = "";
		String^ arSimetrico = "";
		String^ ar = "";
		// --- REFLEXIVA ---
		bool Reflexiva(bool relaciones_bool[7][7]) {
			bool es_reflexiva = true;
			int n = Convert::ToInt32(textBox1->Text);
			arReflexivo = "{";
			for (int i = 0; i < n; i++) {
				if (!relaciones_bool[i][i]) {
					es_reflexiva = false;
					break;
				}
				arReflexivo += mostrarLetra(i) + (i != n - 1 ? "," : "");
			}
			arReflexivo += "}";

			return es_reflexiva;
		}
		// --- SIMETRICA ---
		bool Simetrica(bool relaciones_bool[7][7]) {
			bool es_simetrica = true;
			int n = Convert::ToInt32(textBox1->Text);
			for (int i = 0; i < n - 1; i++) {
				for (int j = i + 1; j < n; j++) {
					if (relaciones_bool[i][j] != relaciones_bool[j][i]) {
						es_simetrica = false;
						break;
					}
					if (relaciones_bool[i][j] == 1) {
						String^ temp = "{" + mostrarLetra(i) + "," + mostrarLetra(j) + "}";
						if (!arSimetrico->Contains(temp) && !arTransitivo->Contains(temp))arSimetrico += temp;
					}
				}
				if (!es_simetrica) {
					break;
				}
			}
			return es_simetrica;
		}
		// --- TRANSITIVA ---
		bool Transitiva(bool relaciones_bool[7][7]) {
			bool es_transitiva = true;
			int n = Convert::ToInt32(textBox1->Text);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (relaciones_bool[i][j]) {
						for (int k = 0; k < n; k++) {
							if (relaciones_bool[j][k] && !relaciones_bool[i][k]) {
								es_transitiva = false;
								break;
							}
							if (relaciones_bool[i][j] == 1) {
								String^ temp = "{" + mostrarLetra(i) + "," + mostrarLetra(j) + "}";
								if (!arTransitivo->Contains(temp) && !arSimetrico->Contains(temp))arTransitivo += temp;
							}

						}
					}
					if (!es_transitiva) {
						break;
					}
				}
				if (!es_transitiva) {
					break;
				}
			}
			return es_transitiva;
		}
		//---- ANTISIMETRICA----
		bool Antisimetrica(bool relaciones_bool[7][7]) {
			bool es_antisimetrica = true;
			int n = Convert::ToInt32(textBox1->Text);
			for (int i = 0; i < n - 1; i++) {
				for (int j = i + 1; j < n; j++) {
					if (relaciones_bool[i][j] == 1 && relaciones_bool[i][j] == relaciones_bool[j][i]) {
						es_antisimetrica = false;
						break;
					}
				}
				if (!es_antisimetrica) {
					break;
				}
			}
			return es_antisimetrica;
		}

		//-------DIAGRAMA DE HASSE-------
		void dibujarDiagrama(bool relaciones_bool[7][7], int pos[7][2], int n, Drawing::Color color) {
			Graphics^ g = this->CreateGraphics();
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (relaciones_bool[i][j] == 1) {
						Pen^ redPen = gcnew Pen(color, 2.0f);
						//g->DrawRectangle(redPen, 500, 595, 100, 100);
						g->DrawLine(redPen, pos[i][0], pos[i][1], pos[j][0], pos[j][1]);
					}
				}
			}
			delete g;
		}
		String^ mostrarLetra(int n) {
			if (n == 0)return "a";
			else if (n == 1)return "b";
			else if (n == 2)return "c";
			else if (n == 3)return "d";
			else if (n == 4)return "e";
			else if (n == 5)return "f";
			else if (n == 6)return "g";
		}
		void calcularDiagramaHasse(bool relaciones_bool[7][7], Drawing::Color color) {
			//posiciones X y Y en el fromulario de los elementos
			int pos[7][2] = { {182, 608},{88, 628},{270, 628},
				{88, 675},{270, 675},{143, 695},{214, 695} };
			int n = Convert::ToInt32(textBox1->Text);
			bool relaciones_bool_temp[7][7];
			bool relaciones_bool_tempTran[7][7];
			//1.llenar matriz temporal para el calculo
			for (int m1 = 0; m1 < n; m1++) {
				for (int m2 = 0; m2 < n; m2++) {
					relaciones_bool_temp[m1][m2] = relaciones_bool[m1][m2];
				}
			}
			//2.quitar aritas reflexivas, diagonales igual a cero (en el temporal)
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i == j)relaciones_bool_temp[i][j] = 0;
				}
			}
			//3.quitar transitividad
			//3.1.calcular elementos transitivos r*r
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					bool temp = false;
					for (int k = 0; k < n; k++) {
						temp = temp || (relaciones_bool_temp[i][k] && relaciones_bool_temp[k][j]);
					}
					relaciones_bool_tempTran[i][j] = temp;
				}
			}
			//3.2.quitar elementos transitivos y poner contadores de lineas por elemento
			// (en el temporal_tran)
			int cont[7][2] = { {0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0} };
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					relaciones_bool[i][j] = relaciones_bool_tempTran[i][j] == 1 ? 0 : relaciones_bool[i][j];
					if (relaciones_bool[i][j])cont[i][1]++;
				}
			}
			//4.ordenar elementos por # de lineas
			int aux, aux1;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (cont[i][1] < cont[j][1])
					{
						aux = cont[i][0];
						aux1 = cont[i][1];
						cont[i][0] = cont[j][0];
						cont[i][1] = cont[j][1];
						cont[j][0] = aux;
						cont[j][1] = aux1;
					}
				}
			}
			//5.mostrar los label con los elementos segun el orden y actualizar posiciones de los elementos
			int pos2[7][2];
			for (int i = 0; i < n; i++) {
				if (i == 0)label222->Text = mostrarLetra(cont[i][0]);
				if (i == 1)label223->Text = mostrarLetra(cont[i][0]);
				if (i == 2)label225->Text = mostrarLetra(cont[i][0]);
				if (i == 3)label224->Text = mostrarLetra(cont[i][0]);
				if (i == 4)label228->Text = mostrarLetra(cont[i][0]);
				if (i == 5)label227->Text = mostrarLetra(cont[i][0]);
				if (i == 6)label226->Text = mostrarLetra(cont[i][0]);
				pos2[i][0] = pos[cont[i][0]][0];
				pos2[i][1] = pos[cont[i][0]][1];
			}
			label222->Visible = true; label223->Visible = true; label224->Visible = true; label225->Visible = true;
			if (n > 4)label228->Visible = true;
			if (n > 5)label227->Visible = true;
			if (n > 6)label226->Visible = true;
			//6.dibujar diagrama
			dibujarDiagrama(relaciones_bool, pos2, n, color);
		}
		//-------FIN DIAGRAMA DE HASSE------
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text == "") {
			label2->Visible = true; ocultarTxts(); button1->Visible = false; Boton_Mostrar->Visible = false; setTrueP(); resetTxts();
		}
		else if (!esNumero(textBox1->Text)) {
			label2->Visible = true; ocultarTxts(); button1->Visible = false;
		}
		else if (!numeroEntre4y7(textBox1->Text)) {
			label2->Visible = true; ocultarTxts(); button1->Visible = false;
		}
		else {
			label2->Visible = false;
			textBox2->Visible = true;
			textBox3->Visible = true;
			textBox4->Visible = true;
			textBox5->Visible = true;
			label206->Visible = true; label207->Visible = true; label208->Visible = true; label209->Visible = true;
			if (Convert::ToInt32(textBox1->Text) > 4) { textBox6->Visible = true; label210->Visible = true; }
			if (Convert::ToInt32(textBox1->Text) > 5) { textBox7->Visible = true; label211->Visible = true; }
			if (Convert::ToInt32(textBox1->Text) > 6) { textBox8->Visible = true; label212->Visible = true; }
			button1->Visible = true;
			textBox1->Enabled = false;
			resetTxts();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Enabled = false;
		textBox3->Enabled = false;
		textBox4->Enabled = false;
		textBox5->Enabled = false;
		if (Convert::ToInt32(textBox1->Text) > 4)textBox6->Enabled = false;
		if (Convert::ToInt32(textBox1->Text) > 5)textBox7->Enabled = false;
		if (Convert::ToInt32(textBox1->Text) > 6)textBox8->Enabled = false;
		a = generarText(); textBox2->Text = a;
		b = generarText(); textBox3->Text = b;
		c = generarText(); textBox4->Text = c;
		d = generarText(); textBox5->Text = d;
		if (Convert::ToInt32(textBox1->Text) > 4) { h = generarText(); textBox6->Text = h; }
		if (Convert::ToInt32(textBox1->Text) > 5) { f = generarText(); textBox7->Text = f; }
		if (Convert::ToInt32(textBox1->Text) > 6) { g = generarText(); textBox8->Text = g; }
		Boton_Mostrar->Visible = true;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		if (textBox2->Text != "" && (esLetra(textBox2->Text) || esNumero(textBox2->Text))) {
			label3->Visible = false;
			txt1Valido = true;
			textBox2->BackColor = System::Drawing::Color::White;

		}
		else {
			txt1Valido = false;
			textBox2->BackColor = System::Drawing::Color::Red;
		}
		if (!sonTxtxValidos())label3->Visible = true;
		a = textBox2->Text;

	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text != "" && (esLetra(textBox3->Text) || esNumero(textBox3->Text))) {
			textBox3->BackColor = System::Drawing::Color::White;
			txt2Valido = true;
		}
		else {
			textBox3->BackColor = System::Drawing::Color::Red;
			txt2Valido = false;

		}
		if (!sonTxtxValidos())label3->Visible = true;
		else label3->Visible = false;
		b = textBox3->Text;

	}

	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text != "" && (esLetra(textBox4->Text) || esNumero(textBox4->Text))) {
			textBox4->BackColor = System::Drawing::Color::White;
			txt3Valido = true;

		}
		else {
			textBox4->BackColor = System::Drawing::Color::Red;
			txt3Valido = false;

		}
		if (!sonTxtxValidos())label3->Visible = true;
		else label3->Visible = false;
		c = textBox4->Text;

	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text != "" && (esLetra(textBox5->Text) || esNumero(textBox5->Text))) {
			textBox5->BackColor = System::Drawing::Color::White;
			txt4Valido = true;

		}
		else {
			textBox5->BackColor = System::Drawing::Color::Red;
			txt4Valido = false;

		}
		if (!sonTxtxValidos())label3->Visible = true;
		else { label3->Visible = false; if (Convert::ToInt32(textBox1->Text) == 4)Boton_Mostrar->Visible = true; }
		d = textBox5->Text;
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		if (textBox6->Text != "" && (esLetra(textBox6->Text) || esNumero(textBox6->Text))) {
			textBox6->BackColor = System::Drawing::Color::White;
			txt5Valido = true;

		}
		else {
			textBox6->BackColor = System::Drawing::Color::Red;
			txt5Valido = false;

		}
		if (!sonTxtxValidos())label3->Visible = true;
		else { label3->Visible = false; if (Convert::ToInt32(textBox1->Text) == 5)Boton_Mostrar->Visible = true; }
		h = textBox6->Text;
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7->Text != "" && (esLetra(textBox7->Text) || esNumero(textBox7->Text))) {
			txt6Valido = true;

			textBox7->BackColor = System::Drawing::Color::White;

		}
		else {
			txt6Valido = false;
			textBox7->BackColor = System::Drawing::Color::Red;
		}
		if (!sonTxtxValidos())label3->Visible = true;
		else { label3->Visible = false; if (Convert::ToInt32(textBox1->Text) == 6)Boton_Mostrar->Visible = true; }
		f = textBox7->Text;
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text != "" && (esLetra(textBox8->Text) || esNumero(textBox8->Text))) {
			txt7Valido = true;
			textBox8->BackColor = System::Drawing::Color::White;
		}
		else {
			txt7Valido = false;
			textBox8->BackColor = System::Drawing::Color::Red;
		}
		if (!sonTxtxValidos())label3->Visible = true;
		else { label3->Visible = false; if (Convert::ToInt32(textBox1->Text) == 7)Boton_Mostrar->Visible = true; }
		g = textBox8->Text;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		setTrueP();
		textBox9->Text = a;
		textBox10->Text = b;
		textBox11->Text = c;
		textBox12->Text = d;
		textBox13->Text = h;
		textBox14->Text = f;
		textBox15->Text = g;
		textBox16->Text = a;
		textBox17->Text = b;
		textBox18->Text = c;
		textBox19->Text = d;
		textBox20->Text = h;
		textBox21->Text = f;
		textBox22->Text = g;


		textBox23->Text = a; textBox26->Text = a; textBox28->Text = a; textBox30->Text = a; textBox32->Text = a; textBox34->Text = a; textBox36->Text = a;
		textBox38->Text = b; textBox40->Text = b; textBox42->Text = b; textBox44->Text = b; textBox46->Text = b; textBox48->Text = b; textBox50->Text = b;
		textBox52->Text = c; textBox54->Text = c; textBox56->Text = c; textBox58->Text = c; textBox60->Text = c; textBox62->Text = c; textBox64->Text = c;
		textBox66->Text = d; textBox68->Text = d; textBox70->Text = d; textBox72->Text = d; textBox74->Text = d; textBox76->Text = d; textBox78->Text = d;
		textBox80->Text = h; textBox82->Text = h; textBox84->Text = h; textBox86->Text = h; textBox88->Text = h; textBox90->Text = h; textBox92->Text = h;
		textBox94->Text = f; textBox96->Text = f; textBox98->Text = f; textBox100->Text = f; textBox102->Text = f; textBox104->Text = f; textBox106->Text = f;
		textBox108->Text = g; textBox110->Text = g; textBox112->Text = g; textBox114->Text = g; textBox116->Text = g; textBox118->Text = g; textBox120->Text = g;

		textBox24->Text = a; textBox37->Text = a; textBox51->Text = a; textBox65->Text = a; textBox79->Text = a; textBox93->Text = a; textBox107->Text = a;
		textBox25->Text = b; textBox39->Text = b; textBox53->Text = b; textBox67->Text = b; textBox81->Text = b; textBox95->Text = b; textBox109->Text = b;
		textBox27->Text = c; textBox41->Text = c; textBox55->Text = c; textBox69->Text = c; textBox83->Text = c; textBox97->Text = c; textBox111->Text = c;
		textBox29->Text = d; textBox43->Text = d; textBox57->Text = d; textBox71->Text = d; textBox85->Text = d; textBox99->Text = d; textBox113->Text = d;
		textBox31->Text = h; textBox45->Text = h; textBox59->Text = h; textBox73->Text = h; textBox87->Text = h; textBox101->Text = h; textBox115->Text = h;
		textBox33->Text = f; textBox47->Text = f; textBox61->Text = f; textBox75->Text = f; textBox89->Text = f; textBox103->Text = f; textBox117->Text = f;
		textBox35->Text = g; textBox49->Text = g; textBox63->Text = g; textBox77->Text = g; textBox91->Text = g; textBox105->Text = g; textBox119->Text = g;

		textBox2->Enabled = false;
		textBox3->Enabled = false;
		textBox4->Enabled = false;
		textBox5->Enabled = false;
		textBox6->Enabled = false;
		textBox7->Enabled = false;
		textBox8->Enabled = false;


		Nuevo_Datos->Visible = true;
		Agregar_Relacion->Visible = true;
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		relacion = textBox121->Text;
		Agregar_Relacion->Visible = false;
		textBox1->Enabled = true;
		Nuevo_Datos->Visible = false;
		Diag_Hasse->Visible = false;
		bool relaciones_bool[7][7];
		generarMatriz(relacion, relaciones_bool);
		calcularDiagramaHasse(relaciones_bool, Drawing::Color::WhiteSmoke);
		textBox1->Text = "";
		label2->Visible = false;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		textBox8->Enabled = true;
		relacion = textBox121->Text;
		label222->Visible = false; label223->Visible = false; label224->Visible = false; label225->Visible = false;
		label226->Visible = false; label227->Visible = false; label228->Visible = false;
		label231->Visible = false; label232->Visible = false;
		label229->Visible = false; label230->Visible = false;

	}

	private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
		textBox121->Visible = true;
		label120->Visible = true;
		label152->Visible = true;
		label153->Visible = true;
		label154->Visible = true;
		Matriz_relacion->Visible = true;
		Agregar_Relacion->Enabled = false;
	}

	private: System::Void textBox121_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Matriz_relacion_Click(System::Object^ sender, System::EventArgs^ e) {
		relacion = textBox121->Text;
		if (Convert::ToInt32(textBox1->Text) == 4) {
			if (validarRelacion_4(relacion) == true) {
				Matriz_relacion->Enabled = false;
				label155->Visible = false;
				label205->Visible = true;
				label233->Visible = true;
				label234->Visible = true;
				//Diag_Hasse->Visible = true;
				textBox121->Enabled = false;
				bool relaciones_bool[7][7];
				generarMatriz(relacion, relaciones_bool);
				mostrarMatrizR();
				if (Reflexiva(relaciones_bool)) { label217->Text = "Sí"; }
				else { label217->Text = "NO"; }
				if (Simetrica(relaciones_bool)) { label218->Text = "Sí"; }
				else { label218->Text = "NO"; }
				if (Transitiva(relaciones_bool)) { label219->Text = "Sí"; }
				else { label219->Text = "NO"; }
				if (Reflexiva(relaciones_bool) && Simetrica(relaciones_bool) && Transitiva(relaciones_bool)) { label220->Text = "Sí"; }
				else { label220->Text = "NO"; }
				if (Antisimetrica(relaciones_bool)) { label229->Text = "Sí"; }
				else { label229->Text = "NO"; }
				if (Reflexiva(relaciones_bool) && Transitiva(relaciones_bool) && Antisimetrica(relaciones_bool)) {
					generarMatriz(relacion, relaciones_bool);
					calcularDiagramaHasse(relaciones_bool, Drawing::Color::Red);
					Diag_Hasse->Visible = false;
					label221->Visible = true;
					label233->Text = "Sí";
				}
				else {
					Diag_Hasse->Visible = false;
					label233->Text = "NO";
				}
			}
		}
		else
		{
			if (Convert::ToInt32(textBox1->Text) == 5) {
				if (validarRelacion_5(relacion) == true) {
					Matriz_relacion->Enabled = false;
					label233->Visible = true;
					label234->Visible = true;
					label205->Visible = true;
					label155->Visible = false;			textBox121->Enabled = false;
					Diag_Hasse->Visible = false;
					bool relaciones_bool[7][7];
					generarMatriz(relacion, relaciones_bool);
					mostrarMatrizR();
					if (Reflexiva(relaciones_bool)) { label217->Text = "Sí"; }
					else { label217->Text = "NO"; }
					if (Simetrica(relaciones_bool)) { label218->Text = "Sí"; }
					else { label218->Text = "NO"; }
					if (Transitiva(relaciones_bool)) { label219->Text = "Sí"; }
					else { label219->Text = "NO"; }
					if (Reflexiva(relaciones_bool) && Simetrica(relaciones_bool) && Transitiva(relaciones_bool)) { label220->Text = "Sí"; }
					else { label220->Text = "NO"; }
					if (Antisimetrica(relaciones_bool)) { label229->Text = "Sí"; }
					else { label229->Text = "NO"; }
					if (Reflexiva(relaciones_bool) && Transitiva(relaciones_bool) && Antisimetrica(relaciones_bool)) {
						generarMatriz(relacion, relaciones_bool);
						calcularDiagramaHasse(relaciones_bool, Drawing::Color::Red);
						label221->Visible = true;

						Diag_Hasse->Visible = false;
						label233->Text = "Sí";
					}
					else {
						Diag_Hasse->Visible = false;
						label233->Text = "NO";
					}
				}
			}
			else
			{
				if (Convert::ToInt32(textBox1->Text) == 6) {
					if (validarRelacion_6(relacion) == true) {
						Matriz_relacion->Enabled = false;
						label233->Visible = true;
						label234->Visible = true;
						label205->Visible = true;
						label155->Visible = false;			textBox121->Enabled = false;
						Diag_Hasse->Visible = false;
						bool relaciones_bool[7][7];
						generarMatriz(relacion, relaciones_bool);
						mostrarMatrizR();
						if (Reflexiva(relaciones_bool)) { label217->Text = "Sí"; }
						else { label217->Text = "NO"; }
						if (Simetrica(relaciones_bool)) { label218->Text = "Sí"; }
						else { label218->Text = "NO"; }
						if (Transitiva(relaciones_bool)) { label219->Text = "Sí"; }
						else { label219->Text = "NO"; }
						if (Reflexiva(relaciones_bool) && Simetrica(relaciones_bool) && Transitiva(relaciones_bool)) { label220->Text = "Sí"; }
						else { label220->Text = "NO"; }
						if (Antisimetrica(relaciones_bool)) { label229->Text = "Sí"; }
						else { label229->Text = "NO"; }
						if (Reflexiva(relaciones_bool) && Transitiva(relaciones_bool) && Antisimetrica(relaciones_bool)) {
							generarMatriz(relacion, relaciones_bool);
							calcularDiagramaHasse(relaciones_bool, Drawing::Color::Red);
							label221->Visible = true;

							Diag_Hasse->Visible = false;
							label233->Text = "Sí";
						}
						else {
							Diag_Hasse->Visible = false;
							label233->Text = "No";
						}

					}
				}
				else
				{
					if (validarRelacion_7(relacion) == true) {
						Matriz_relacion->Enabled = false;
						label233->Visible = true;
						label234->Visible = true;
						label205->Visible = true;
						label155->Visible = false; 			textBox121->Enabled = false;
						Diag_Hasse->Visible = false;
						bool relaciones_bool[7][7];
						generarMatriz(relacion, relaciones_bool);
						mostrarMatrizR();
						if (Reflexiva(relaciones_bool)) { label217->Text = "Sí"; }
						else { label217->Text = "NO"; }
						if (Simetrica(relaciones_bool)) { label218->Text = "Sí"; }
						else { label218->Text = "NO"; }
						if (Transitiva(relaciones_bool)) { label219->Text = "Sí"; }
						else { label219->Text = "NO"; }
						if (Reflexiva(relaciones_bool) && Simetrica(relaciones_bool) && Transitiva(relaciones_bool)) { label220->Text = "Sí"; }
						else { label220->Text = "NO"; }
						if (Antisimetrica(relaciones_bool)) { label229->Text = "Sí"; }
						else { label229->Text = "NO"; }
						if (Reflexiva(relaciones_bool) && Transitiva(relaciones_bool) && Antisimetrica(relaciones_bool)) {
							generarMatriz(relacion, relaciones_bool);
							calcularDiagramaHasse(relaciones_bool, Drawing::Color::Red);
							label221->Visible = true;

							Diag_Hasse->Visible = false;
							label233->Text = "Sí";
						}
						else {
							Diag_Hasse->Visible = false;
							label233->Text = "No";
						}
					}
				}
			}

			if (!Matriz_relacion->Visible) { label155->Visible = true; }

		}
		if (label220->Text == "Sí") {
			ar = "{" + arReflexivo + arTransitivo + arSimetrico + "}";
			label231->Text = ar;
			label231->Visible = true;
			label232->Visible = true;
		}
		else {
			ar = ""; arReflexivo = ""; arTransitivo = ""; arSimetrico = "";
			label231->Visible = false;
			label232->Visible = false;
		}
	}
	private: System::Void label212_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_3(System::Object^ sender, System::EventArgs^ e) {
		relacion = textBox121->Text;
		bool relaciones_bool[7][7];
		generarMatriz(relacion, relaciones_bool);
		calcularDiagramaHasse(relaciones_bool, Drawing::Color::Red);
	}
	private: System::Void label232_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label231_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label221_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
