PORTNAME=	innate
PORTVERSION=	2015.10.28
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Powerful web-framework wrapper for Rack
WWW=		https://github.com/manveru/innate

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-rack16>=1.6.4<1.7:www/rubygem-rack16

USES=		gem shebangfix

NO_ARCH=	yes

SHEBANG_FILES=	.load_gemset

.include <bsd.port.mk>
