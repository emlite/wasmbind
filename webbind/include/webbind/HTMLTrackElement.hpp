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
    jsbind::String kind() const;
    void kind(const jsbind::String& value);
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String srclang() const;
    void srclang(const jsbind::String& value);
    jsbind::String label() const;
    void label(const jsbind::String& value);
    bool default_() const;
    void default_(bool value);
    unsigned short readyState() const;
    TextTrack track() const;
};

