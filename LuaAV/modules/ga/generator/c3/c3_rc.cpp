int c3space_rc(lua_State *L) {
	double d1, d2;
	_TAG_ tag1;
	_TAG_ tag2;
	_ELEM_ *elem1 = Glue<_ELEM_>::to(L, 1);
	_ELEM_ *elem2 = Glue<_ELEM_>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (_ELEM_ *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.rc: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (_ELEM_ *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.rc: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((mv *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
				lua::push<double>(
					L, 
					rc(*((I5_t *)elem1->elem), *((I5i_t *)elem2->elem))
				);
			
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			ODDVERSOR_TAG,
			new oddVersor(
				rc(*((I5_t *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
				lua::push<double>(
					L, 
					rc(*((vectorE3GA *)elem1->elem), *((bivectorE3GA *)elem2->elem))
				);
			
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
				lua::push<double>(
					L, 
					rc(*((vectorE3GA *)elem1->elem), *((line *)elem2->elem))
				);
			
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			ROTORE3GA_TAG,
			new rotorE3GA(
				rc(*((rotorE3GA *)elem1->elem), *((evenVersor *)elem2->elem))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pointPair *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((normalizedTranslator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case TRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((translator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case RBM_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((RBM *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case EVENVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			ODDVERSOR_TAG,
			new oddVersor(
				rc(*((evenVersor *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((evenVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ODDVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			ODDVERSOR_TAG,
			new oddVersor(
				rc(*((oddVersor *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(mv(*((oddVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DOUBLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<_ELEM_>::push(
		L, 
		new _ELEM_(
			MV_TAG,
			new mv(
				rc(*((double *)elem1), *((double *)elem2))
			)
		)
	);
break;
}
break;
}
return 1;
