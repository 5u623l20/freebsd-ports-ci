PORTNAME=	qiniu
PORTVERSION=	6.9.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Qiniu Resource (Cloud) Storage SDK for Ruby
WWW=		https://github.com/qiniu/ruby-sdk

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-mime-types>=3.1<4:misc/rubygem-mime-types \
		rubygem-rest-client>=2.0<3:www/rubygem-rest-client \
		rubygem-rexml>=3.2<4:textproc/rubygem-rexml

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
