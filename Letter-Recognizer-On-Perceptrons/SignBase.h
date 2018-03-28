#pragma once
#include "header.h"

enum E_NID
{
	E_NID_A,
	E_NID_B,
	E_NID_C,
	E_NID_D,
	E_NID_E,
	E_NID_F,
	E_NID_G,
	E_NID_H,
	E_NID_I,
	E_NID_J,
	E_NID_K,
	E_NID_L,
	E_NID_M,
	E_NID_N,
	E_NID_O,
	E_NID_P,
	E_NID_Q,
	E_NID_R,
	E_NID_S,
	E_NID_T,
	E_NID_U,
	E_NID_V,
	E_NID_W,
	E_NID_X,
	E_NID_Y,
	E_NID_Z,
	E_NID_a,
	E_NID_b,
	E_NID_c,
	E_NID_d,
	E_NID_e,
	E_NID_f,
	E_NID_g,
	E_NID_h,
	E_NID_i,
	E_NID_j,
	E_NID_k,
	E_NID_l,
	E_NID_m,
	E_NID_n,
	E_NID_o,
	E_NID_p,
	E_NID_q,
	E_NID_r,
	E_NID_s,
	E_NID_t,
	E_NID_u,
	E_NID_v,
	E_NID_w,
	E_NID_x,
	E_NID_y,
	E_NID_z,
	E_NID_0,
	E_NID_1,
	E_NID_2,
	E_NID_3,
	E_NID_4,
	E_NID_5,
	E_NID_6,
	E_NID_7,
	E_NID_8,
	E_NID_9,

	E_NID_DontKnow
};

class SignBase
{
public:
	SignBase();
	char get_char(E_NID sign) const;
	char get_char(sf::Keyboard::Key key) const;
	E_NID get_NID(char sign) const;
	int get_size() const;
	~SignBase();
};