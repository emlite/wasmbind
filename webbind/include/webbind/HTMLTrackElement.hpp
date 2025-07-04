#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class TextTrack;


class HTMLTrackElement : public HTMLElement {
    explicit HTMLTrackElement(Handle h) noexcept;

public:
    explicit HTMLTrackElement(const emlite::Val &val) noexcept;
    static HTMLTrackElement take_ownership(Handle h) noexcept;

    HTMLTrackElement clone() const noexcept;
    HTMLTrackElement();
    jsbind::DOMString kind() const;
    void kind(const jsbind::DOMString& value);
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString srclang() const;
    void srclang(const jsbind::DOMString& value);
    jsbind::DOMString label() const;
    void label(const jsbind::DOMString& value);
    bool default_() const;
    void default_(bool value);
    unsigned short readyState() const;
    TextTrack track() const;
};

