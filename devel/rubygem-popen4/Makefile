PORTNAME=	popen4
PORTVERSION=	0.1.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
DISTNAME=	POpen4-${PORTVERSION}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Cross platform API for managing child processes
WWW=		https://github.com/shairontoledo/popen4

LICENSE=	GPLv2 RUBY
LICENSE_COMB=	dual
LICENSE_FILE_RUBY=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-open4>=0.4.0:devel/rubygem-open4 \
		rubygem-platform>=0.4.0:devel/rubygem-platform

NO_ARCH=	yes
USES=		gem

.include <bsd.port.mk>
