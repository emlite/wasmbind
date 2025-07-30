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
    jsbind::String alt() const;
    void alt(const jsbind::String& value);
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String srcset() const;
    void srcset(const jsbind::String& value);
    jsbind::String sizes() const;
    void sizes(const jsbind::String& value);
    jsbind::String crossOrigin() const;
    void crossOrigin(const jsbind::String& value);
    jsbind::String useMap() const;
    void useMap(const jsbind::String& value);
    bool isMap() const;
    void isMap(bool value);
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
    unsigned long naturalWidth() const;
    unsigned long naturalHeight() const;
    bool complete() const;
    jsbind::String currentSrc() const;
    jsbind::String referrerPolicy() const;
    void referrerPolicy(const jsbind::String& value);
    jsbind::String decoding() const;
    void decoding(const jsbind::String& value);
    jsbind::String loading() const;
    void loading(const jsbind::String& value);
    jsbind::String fetchPriority() const;
    void fetchPriority(const jsbind::String& value);
    jsbind::Promise<jsbind::Undefined> decode();
    long x() const;
    long y() const;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String lowsrc() const;
    void lowsrc(const jsbind::String& value);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    unsigned long hspace() const;
    void hspace(unsigned long value);
    unsigned long vspace() const;
    void vspace(unsigned long value);
    jsbind::String longDesc() const;
    void longDesc(const jsbind::String& value);
    jsbind::String border() const;
    void border(const jsbind::String& value);
    jsbind::String attributionSrc() const;
    void attributionSrc(const jsbind::String& value);
    bool sharedStorageWritable() const;
    void sharedStorageWritable(bool value);
};

