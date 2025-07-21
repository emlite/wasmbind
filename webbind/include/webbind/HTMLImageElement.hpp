#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLImageElement : public HTMLElement {
    explicit HTMLImageElement(Handle h) noexcept;

public:
    explicit HTMLImageElement(const emlite::Val &val) noexcept;
    static HTMLImageElement take_ownership(Handle h) noexcept;

    HTMLImageElement clone() const noexcept;
    HTMLImageElement();
    jsbind::DOMString alt() const;
    void alt(const jsbind::DOMString& value);
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::USVString srcset() const;
    void srcset(const jsbind::USVString& value);
    jsbind::DOMString sizes() const;
    void sizes(const jsbind::DOMString& value);
    jsbind::DOMString crossOrigin() const;
    void crossOrigin(const jsbind::DOMString& value);
    jsbind::DOMString useMap() const;
    void useMap(const jsbind::DOMString& value);
    bool isMap() const;
    void isMap(bool value);
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
    unsigned long naturalWidth() const;
    unsigned long naturalHeight() const;
    bool complete() const;
    jsbind::USVString currentSrc() const;
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    jsbind::DOMString decoding() const;
    void decoding(const jsbind::DOMString& value);
    jsbind::DOMString loading() const;
    void loading(const jsbind::DOMString& value);
    jsbind::DOMString fetchPriority() const;
    void fetchPriority(const jsbind::DOMString& value);
    jsbind::Promise<jsbind::Undefined> decode();
    long x() const;
    long y() const;
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::USVString lowsrc() const;
    void lowsrc(const jsbind::USVString& value);
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    unsigned long hspace() const;
    void hspace(unsigned long value);
    unsigned long vspace() const;
    void vspace(unsigned long value);
    jsbind::USVString longDesc() const;
    void longDesc(const jsbind::USVString& value);
    jsbind::DOMString border() const;
    void border(const jsbind::DOMString& value);
    jsbind::USVString attributionSrc() const;
    void attributionSrc(const jsbind::USVString& value);
    bool sharedStorageWritable() const;
    void sharedStorageWritable(bool value);
};

