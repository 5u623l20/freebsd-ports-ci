PORTNAME=	angie-module-dav-ext
GH_TUPLE=	arut:nginx-dav-ext-module:v3.0.0:module

COMMENT=	Angie dav-ext dynamic module

LIB_DEPENDS=	libxml2.so:textproc/libxml2 \
		libxslt.so:textproc/libxslt

MASTERDIR=	${.CURDIR}/../../www/angie

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${MODDIR}

	${INSTALL_LIB} ${WRKSRC}/objs/ngx_http_dav_ext_module.so \
	    ${STAGEDIR}${MODDIR}

	${INSTALL_MAN} ${WRKSRC_module}/README.rst ${STAGEDIR}${DOCSDIR}

do-install-DEBUG-on:
	${INSTALL} ${COPY} -m ${_SHAREMODE} \
	    ${WRKSRC_DEBUG}/objs/ngx_http_dav_ext_module.so \
	    ${STAGEDIR}${MODDIR}/ngx_http_dav_ext_module-debug.so

.include "${MASTERDIR}/Makefile"
