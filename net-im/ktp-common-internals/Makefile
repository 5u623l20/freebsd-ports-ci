PORTNAME=	ktp-common-internals
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Telepathy internal library
WWW=		https://community.kde.org/KTp

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libsignon-qt5.so:sysutils/signon-qt5 \
		libtelepathy-qt5.so:net-im/telepathy-qt \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libotr.so:security/libotr \
		libaccounts-qt5.so:net-im/libaccounts-qt5 \
		libkaccounts.so:net-im/kaccounts-integration
RUN_DEPENDS=	${LOCALBASE}/lib/mission-control-plugins.0/mcp-account-manager-accounts-sso.so:net-im/telepathy-accounts-signon \
		${LOCALBASE}/libexec/mission-control-5:net-im/telepathy-mission-control

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Will not be part of KDE Gear 23.08 in August
EXPIRATION_DATE=	2023-09-30
KDE_APPLICATIONS_VERSION=	23.04.3

USES=		cmake compiler:c++11-lang gettext pkgconfig kde:5 \
		qt:5 tar:xz xorg
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons i18n iconthemes itemviews jobwidgets kcmutils \
		kio notifications notifyconfig parts people service solid \
		sonnet syntaxhighlighting texteditor textwidgets wallet widgetsaddons \
		windowsystem xmlgui \
		ecm:build
USE_QT=		concurrent core dbus declarative gui network sql widgets xml \
		buildtools:build qmake:build
USE_XORG=	x11
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
