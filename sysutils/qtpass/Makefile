PORTNAME=	qtpass
DISTVERSION=	1.4.0-rc1-95
DISTVERSIONSUFFIX=	-g1e5a217d
CATEGORIES=	sysutils

MAINTAINER=	brouwer@annejan.com
COMMENT=	Qt GUI for pass, the standard unix password manager
WWW=		https://qtpass.org/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	pass:sysutils/password-store

USES=		compiler:c++11-lang cpe gl qmake:outsource qt:5 xorg
USE_GITHUB=	yes
GH_ACCOUNT=	IJhack
GH_PROJECT=	QtPass
USE_GL=		gl
USE_QT=		core gui network testlib widgets buildtools:build linguisttools:build
CPE_VENDOR=	ijhack

# Create a desktop entry for the port.
DESKTOP_ENTRIES=	"QtPass" "" \
			"${PREFIX}/share/pixmaps/qtpass.png" \
			"${PREFIX}/bin/qtpass" \
			"Security;Utility;" true

PLIST_FILES=	bin/qtpass \
		share/pixmaps/qtpass.png

# Fix build with Qt 5.13
pre-build:
	cd ${WRKSRC}/localization && ${LRELEASE} *ts

# Install the icon of the port.
post-install:
	${INSTALL_DATA} ${WRKSRC}/artwork/icon.png \
			${STAGEDIR}${PREFIX}/share/pixmaps/qtpass.png

.include <bsd.port.mk>
