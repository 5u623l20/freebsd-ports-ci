PORTNAME=	chromedriver-helper
PORTVERSION=	2.1.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Easy installation and use of chromedriver
WWW=		https://github.com/flavorjones/chromedriver-helper

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-archive-zip>=0.10<1:archivers/rubygem-archive-zip \
		rubygem-nokogiri>=1.8<2:textproc/rubygem-nokogiri

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/chromedriver-helper \
		bin/chromedriver-update

.include <bsd.port.mk>
