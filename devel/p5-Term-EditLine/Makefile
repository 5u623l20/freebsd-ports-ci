PORTNAME=	Term-EditLine
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN \
		LOCAL/ehaupt
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl interface to the NetBSD editline library
WWW=		https://metacpan.org/release/Term-EditLine

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		libedit perl5 pkgconfig
USE_PERL5=	configure

post-configure:
	@${REINPLACE_CMD} \
		-e 's|\(iv_return.*\)\(EL_BUILTIN_GETCFN\)|\1(IV)\2|' \
		${WRKSRC}/const-c.inc

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Term/EditLine/EditLine.so

.include <bsd.port.mk>
