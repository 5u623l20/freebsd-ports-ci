PORTNAME=	Amon2
PORTVERSION=	6.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for lightweight web application framework
WWW=		https://metacpan.org/release/Amon2

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Copy-Recursive>=0:devel/p5-File-Copy-Recursive \
		p5-File-ShareDir>=0:devel/p5-File-ShareDir \
		p5-HTML-FillInForm-Lite>=0:www/p5-HTML-FillInForm-Lite \
		p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-HTTP-Session2>=0:www/p5-HTTP-Session2 \
		p5-Hash-MultiValue>=0:devel/p5-Hash-MultiValue \
		p5-JSON>=2:converters/p5-JSON \
		p5-Module-CPANfile>=0.9020:devel/p5-Module-CPANfile \
		p5-Plack>=0.9982:www/p5-Plack \
		p5-Plack-Middleware-Session>=0:www/p5-Plack-Middleware-Session \
		p5-Router-Boom>=0.07:www/p5-Router-Boom \
		p5-Text-Xslate>=2.0010:textproc/p5-Text-Xslate \
		p5-Try-Tiny>=0.06:lang/p5-Try-Tiny \
		p5-URI>=1.54:net/p5-URI
TEST_DEPENDS=	p5-Test-Requires>=0.06:devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
