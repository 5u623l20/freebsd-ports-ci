PORTNAME=	deforaos-browser
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	x11-fm
MASTER_SITES=	http://www.defora.org/os/download/download/4442/
DISTNAME=	Browser-${PORTVERSION}

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	DeforaOS desktop file browser
WWW=		https://www.defora.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libSystem.so:devel/deforaos-libsystem \
		libDesktop.so:x11/deforaos-libdesktop \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libXrandr.so:x11/libXrandr

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
NLS_USES=		gettext
DOCS_BUILD_DEPENDS=	xsltproc:textproc/libxslt \
    ${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl

USES=		desktop-file-utils gnome pkgconfig xorg
USE_GNOME=	gtk20 cairo
USE_XORG=	x11
USE_LDCONFIG=	yes
MAKE_ARGS+=	PREFIX=${PREFIX}
MAKE_ENV+=	MANDIR=${STAGEDIR}${MANPREFIX}/man

CONFLICTS_INSTALL=	schilyutils silo # bin/browser bin/copy
post-patch:
	${REINPLACE_CMD} -e 's|/lib/|/libdata/|g' \
		${WRKSRC}/data/pkgconfig.sh
	${REINPLACE_CMD} 's|-Wl,-pie||g' \
		${WRKSRC}/tests/Makefile \
		${WRKSRC}/tools/Makefile \
		${WRKSRC}/src/Makefile

post-patch-DOCS-off:
	${REINPLACE_CMD} -e '/^SUBDIRS/ s|doc||' ${WRKSRC}/Makefile

post-patch-NLS-off:
	${REINPLACE_CMD} 's|include po src|include src|' \
		${WRKSRC}/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/* \
		${STAGEDIR}${PREFIX}/lib/Desktop/widget/browser.so \
		${STAGEDIR}${PREFIX}/lib/Browser/plugins/* \
		${STAGEDIR}${PREFIX}/lib/libBrowser.so.0.0

.include <bsd.port.mk>
