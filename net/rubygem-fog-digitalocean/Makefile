PORTNAME=	fog-digitalocean
PORTVERSION=	0.4.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support DigitalOcean
WWW=		https://github.com/fog/fog-digitalocean

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-fog-json>=0:devel/rubygem-fog-json \
		rubygem-fog-xml>=0:textproc/rubygem-fog-xml \
		rubygem-ipaddress>=0.5:net/rubygem-ipaddress

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
