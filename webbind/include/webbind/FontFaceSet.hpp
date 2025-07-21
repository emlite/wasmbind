#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class FontFaceSet;
class FontFace;


class FontFaceSet : public EventTarget {
    explicit FontFaceSet(Handle h) noexcept;

public:
    explicit FontFaceSet(const emlite::Val &val) noexcept;
    static FontFaceSet take_ownership(Handle h) noexcept;

    FontFaceSet clone() const noexcept;
    FontFaceSet add(const FontFace& font);
    bool delete_(const FontFace& font);
    jsbind::Undefined clear();
    jsbind::Any onloading() const;
    void onloading(const jsbind::Any& value);
    jsbind::Any onloadingdone() const;
    void onloadingdone(const jsbind::Any& value);
    jsbind::Any onloadingerror() const;
    void onloadingerror(const jsbind::Any& value);
    jsbind::Promise<jsbind::Sequence<FontFace>> load(const jsbind::CSSOMString& font);
    jsbind::Promise<jsbind::Sequence<FontFace>> load(const jsbind::CSSOMString& font, const jsbind::CSSOMString& text);
    bool check(const jsbind::CSSOMString& font);
    bool check(const jsbind::CSSOMString& font, const jsbind::CSSOMString& text);
    jsbind::Promise<FontFaceSet> ready() const;
    FontFaceSetLoadStatus status() const;
};

