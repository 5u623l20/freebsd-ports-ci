PORTNAME=	jaeger-client
PORTVERSION=	1.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	OpenTracing Tracer implementation for Jaeger in Ruby
WWW=		https://github.com/salemove/jaeger-client-ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-opentracing>=0.3:devel/rubygem-opentracing \
		rubygem-thrift>=0:devel/rubygem-thrift

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
