PORTNAME=	xcb-util
PORTVERSION=	0.4.1
PORTEPOCH=	1
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Module with libxcb/libX11 extension/replacement libraries
WWW=		https://xcb.freedesktop.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake tar:xz xorg xorg-cat:lib
USE_XORG=	xau xcb xdmcp
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${libdir}/pkgconfig|$${prefix}/libdata/pkgconfig|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
