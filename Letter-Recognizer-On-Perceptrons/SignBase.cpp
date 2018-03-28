#include "header.h"
#include "SignBase.h"

SignBase::SignBase()
{}
char SignBase::get_char(E_NID sign) const
{
	switch (sign)
	{
	case E_NID_A:
		return char('A');
	case E_NID_B:
		return char('B');
	case E_NID_C:
		return char('C');
	case E_NID_D:
		return char('D');
	case E_NID_E:
		return char('E');
	case E_NID_F:
		return char('F');
	case E_NID_G:
		return char('G');
	case E_NID_H:
		return char('H');
	case E_NID_I:
		return char('I');
	case E_NID_J:
		return char('J');
	case E_NID_K:
		return char('K');
	case E_NID_L:
		return char('L');
	case E_NID_M:
		return char('M');
	case E_NID_N:
		return char('N');
	case E_NID_O:
		return char('O');
	case E_NID_P:
		return char('P');
	case E_NID_Q:
		return char('Q');
	case E_NID_R:
		return char('R');
	case E_NID_S:
		return char('S');
	case E_NID_T:
		return char('T');
	case E_NID_U:
		return char('U');
	case E_NID_V:
		return char('V');
	case E_NID_W:
		return char('W');
	case E_NID_X:
		return char('X');
	case E_NID_Y:
		return char('Y');
	case E_NID_Z:
		return char('Z');
	case E_NID_a:
		return char('a');
	case E_NID_b:
		return char('b');
	case E_NID_c:
		return char('c');
	case E_NID_d:
		return char('d');
	case E_NID_e:
		return char('e');
	case E_NID_f:
		return char('f');
	case E_NID_g:
		return char('g');
	case E_NID_h:
		return char('h');
	case E_NID_i:
		return char('i');
	case E_NID_j:
		return char('j');
	case E_NID_k:
		return char('k');
	case E_NID_l:
		return char('l');
	case E_NID_m:
		return char('m');
	case E_NID_n:
		return char('n');
	case E_NID_o:
		return char('o');
	case E_NID_p:
		return char('p');
	case E_NID_q:
		return char('q');
	case E_NID_r:
		return char('r');
	case E_NID_s:
		return char('s');
	case E_NID_t:
		return char('t');
	case E_NID_u:
		return char('u');
	case E_NID_v:
		return char('v');
	case E_NID_w:
		return char('w');
	case E_NID_x:
		return char('x');
	case E_NID_y:
		return char('y');
	case E_NID_z:
		return char('z');
	case E_NID_0:
		return char('0');
	case E_NID_1:
		return char('1');
	case E_NID_2:
		return char('2');
	case E_NID_3:
		return char('3');
	case E_NID_4:
		return char('4');
	case E_NID_5:
		return char('5');
	case E_NID_6:
		return char('6');
	case E_NID_7:
		return char('7');
	case E_NID_8:
		return char('8');
	case E_NID_9:
		return char('9');
	default:
		return char('%');
	}
}
char SignBase::get_char(sf::Keyboard::Key key) const
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
	{
		switch (key)
		{
		case sf::Keyboard::A:
			return char('A');
		case sf::Keyboard::B:
			return char('B');
		case sf::Keyboard::C:
			return char('C');
		case sf::Keyboard::D:
			return char('D');
		case sf::Keyboard::E:
			return char('E');
		case sf::Keyboard::F:
			return char('F');
		case sf::Keyboard::G:
			return char('G');
		case sf::Keyboard::H:
			return char('H');
		case sf::Keyboard::I:
			return char('I');
		case sf::Keyboard::J:
			return char('J');
		case sf::Keyboard::K:
			return char('K');
		case sf::Keyboard::L:
			return char('L');
		case sf::Keyboard::M:
			return char('M');
		case sf::Keyboard::N:
			return char('N');
		case sf::Keyboard::O:
			return char('O');
		case sf::Keyboard::P:
			return char('P');
		case sf::Keyboard::Q:
			return char('Q');
		case sf::Keyboard::R:
			return char('R');
		case sf::Keyboard::S:
			return char('S');
		case sf::Keyboard::T:
			return char('T');
		case sf::Keyboard::U:
			return char('U');
		case sf::Keyboard::V:
			return char('V');
		case sf::Keyboard::W:
			return char('W');
		case sf::Keyboard::X:
			return char('X');
		case sf::Keyboard::Y:
			return char('Y');
		case sf::Keyboard::Z:
			return char('Z');
		default:
			return char('%');
		}
	}
	else
	{
		switch (key)
		{
		case sf::Keyboard::A:
			return char('a');
		case sf::Keyboard::B:
			return char('b');
		case sf::Keyboard::C:
			return char('c');
		case sf::Keyboard::D:
			return char('d');
		case sf::Keyboard::E:
			return char('e');
		case sf::Keyboard::F:
			return char('f');
		case sf::Keyboard::G:
			return char('g');
		case sf::Keyboard::H:
			return char('h');
		case sf::Keyboard::I:
			return char('i');
		case sf::Keyboard::J:
			return char('j');
		case sf::Keyboard::K:
			return char('k');
		case sf::Keyboard::L:
			return char('l');
		case sf::Keyboard::M:
			return char('m');
		case sf::Keyboard::N:
			return char('n');
		case sf::Keyboard::O:
			return char('o');
		case sf::Keyboard::P:
			return char('p');
		case sf::Keyboard::Q:
			return char('q');
		case sf::Keyboard::R:
			return char('r');
		case sf::Keyboard::S:
			return char('s');
		case sf::Keyboard::T:
			return char('t');
		case sf::Keyboard::U:
			return char('u');
		case sf::Keyboard::V:
			return char('v');
		case sf::Keyboard::W:
			return char('w');
		case sf::Keyboard::X:
			return char('x');
		case sf::Keyboard::Y:
			return char('y');
		case sf::Keyboard::Z:
			return char('z');
		case sf::Keyboard::Num0:
			return char('0');
		case sf::Keyboard::Num1:
			return char('1');
		case sf::Keyboard::Num2:
			return char('2');
		case sf::Keyboard::Num3:
			return char('3');
		case sf::Keyboard::Num4:
			return char('4');
		case sf::Keyboard::Num5:
			return char('5');
		case sf::Keyboard::Num6:
			return char('6');
		case sf::Keyboard::Num7:
			return char('7');
		case sf::Keyboard::Num8:
			return char('8');
		case sf::Keyboard::Num9:
			return char('9');
		default:
			return char('%');
		}
	}
}
E_NID SignBase::get_NID(char sign) const
{
	switch (sign)
	{
	case 'A':
		return E_NID_A;
	case 'B':
		return E_NID_B;
	case 'C':
		return E_NID_C;
	case 'D':
		return E_NID_D;
	case 'E':
		return E_NID_E;
	case 'F':
		return E_NID_F;
	case 'G':
		return E_NID_G;
	case 'H':
		return E_NID_H;
	case 'I':
		return E_NID_I;
	case 'J':
		return E_NID_J;
	case 'K':
		return E_NID_K;
	case 'L':
		return E_NID_L;
	case 'M':
		return E_NID_M;
	case 'N':
		return E_NID_N;
	case 'O':
		return E_NID_O;
	case 'P':
		return E_NID_P;
	case 'Q':
		return E_NID_Q;
	case 'R':
		return E_NID_R;
	case 'S':
		return E_NID_S;
	case 'T':
		return E_NID_T;
	case 'U':
		return E_NID_U;
	case 'V':
		return E_NID_V;
	case 'W':
		return E_NID_W;
	case 'X':
		return E_NID_X;
	case 'Y':
		return E_NID_Y;
	case 'Z':
		return E_NID_Z;
	case 'a':
		return E_NID_a;
	case 'b':
		return E_NID_b;
	case 'c':
		return E_NID_c;
	case 'd':
		return E_NID_d;
	case 'e':
		return E_NID_e;
	case 'f':
		return E_NID_f;
	case 'g':
		return E_NID_g;
	case 'h':
		return E_NID_h;
	case 'i':
		return E_NID_i;
	case 'j':
		return E_NID_j;
	case 'k':
		return E_NID_k;
	case 'l':
		return E_NID_l;
	case 'm':
		return E_NID_m;
	case 'n':
		return E_NID_n;
	case 'o':
		return E_NID_o;
	case 'p':
		return E_NID_p;
	case 'q':
		return E_NID_q;
	case 'r':
		return E_NID_r;
	case 's':
		return E_NID_s;
	case 't':
		return E_NID_t;
	case 'u':
		return E_NID_u;
	case 'v':
		return E_NID_v;
	case 'w':
		return E_NID_w;
	case 'x':
		return E_NID_x;
	case 'y':
		return E_NID_y;
	case 'z':
		return E_NID_z;
	case '0':
		return E_NID_0;
	case '1':
		return E_NID_1;
	case '2':
		return E_NID_2;
	case '3':
		return E_NID_3;
	case '4':
		return E_NID_4;
	case '5':
		return E_NID_5;
	case '6':
		return E_NID_6;
	case '7':
		return E_NID_7;
	case '8':
		return E_NID_8;
	case '9':
		return E_NID_9;
	default:
		return E_NID_DontKnow;
	}
}
int SignBase::get_size() const
{
	return int(E_NID_DontKnow);
}
SignBase::~SignBase()
{}