#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FontFace;
class FontFaceFeatures;
class FontFaceVariations;
class FontFacePalettes;


class FontFace : public emlite::Val {
    explicit FontFace(Handle h) noexcept;

public:
    explicit FontFace(const emlite::Val &val) noexcept;
    static FontFace take_ownership(Handle h) noexcept;

    FontFace clone() const noexcept;
    FontFace(const jsbind::CSSOMString& family, const jsbind::Any& source);
    FontFace(const jsbind::CSSOMString& family, const jsbind::Any& source, const jsbind::Any& descriptors);
    jsbind::CSSOMString family() const;
    void family(const jsbind::CSSOMString& value);
    jsbind::CSSOMString style() const;
    void style(const jsbind::CSSOMString& value);
    jsbind::CSSOMString weight() const;
    void weight(const jsbind::CSSOMString& value);
    jsbind::CSSOMString stretch() const;
    void stretch(const jsbind::CSSOMString& value);
    jsbind::CSSOMString unicodeRange() const;
    void unicodeRange(const jsbind::CSSOMString& value);
    jsbind::CSSOMString featureSettings() const;
    void featureSettings(const jsbind::CSSOMString& value);
    jsbind::CSSOMString variationSettings() const;
    void variationSettings(const jsbind::CSSOMString& value);
    jsbind::CSSOMString display() const;
    void display(const jsbind::CSSOMString& value);
    jsbind::CSSOMString ascentOverride() const;
    void ascentOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString descentOverride() const;
    void descentOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString lineGapOverride() const;
    void lineGapOverride(const jsbind::CSSOMString& value);
    FontFaceLoadStatus status() const;
    jsbind::Promise<FontFace> load();
    jsbind::Promise<FontFace> loaded() const;
    FontFaceFeatures features() const;
    FontFaceVariations variations() const;
    FontFacePalettes palettes() const;
};

