PORTNAME=	milk
PORTVERSION=	2.1
PORTREVISION=	9
CATEGORIES=	x11-themes gnome
MASTER_SITES=	http://freebsd.nsu.ru/distfiles/ LOCAL/danfe
PKGNAMEPREFIX?=	${TYPE}-
PKGNAMESUFFIX=	-theme
DISTNAME=	Milk-${PORTVERSION}

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Port of Milk, Mac OS X theme

USES=		tar:bzip2
NO_BUILD=	yes

TYPE?=		gtk
THEME_NAME=	Milk

.if ${TYPE} == gtk
THEME_DIR=	${PREFIX}/share/themes/${THEME_NAME}
PLIST_SUB+=	GTK20="" METACITY="@comment "
USES+=		gnome
USE_GNOME=	gtk20
.else	# metacity
THEME_DIR=	${PREFIX}/share/themes/${THEME_NAME}
PLIST_SUB+=	GTK20="@comment " METACITY=""
.endif

do-install:
	@${MKDIR} ${STAGEDIR}${THEME_DIR}
	${INSTALL_DATA} ${WRKSRC}/index.theme ${STAGEDIR}${THEME_DIR}
.if ${TYPE} == gtk
	cd ${WRKSRC} && ${COPYTREE_SHARE} gtk-2.0 ${STAGEDIR}${THEME_DIR}
.else
	cd ${WRKSRC} && ${COPYTREE_SHARE} metacity-1 ${STAGEDIR}${THEME_DIR}
.endif

.include <bsd.port.mk>
