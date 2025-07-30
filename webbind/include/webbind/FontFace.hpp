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
    FontFace(const jsbind::String& family, const jsbind::Any& source);
    FontFace(const jsbind::String& family, const jsbind::Any& source, const jsbind::Any& descriptors);
    jsbind::String family() const;
    void family(const jsbind::String& value);
    jsbind::String style() const;
    void style(const jsbind::String& value);
    jsbind::String weight() const;
    void weight(const jsbind::String& value);
    jsbind::String stretch() const;
    void stretch(const jsbind::String& value);
    jsbind::String unicodeRange() const;
    void unicodeRange(const jsbind::String& value);
    jsbind::String featureSettings() const;
    void featureSettings(const jsbind::String& value);
    jsbind::String variationSettings() const;
    void variationSettings(const jsbind::String& value);
    jsbind::String display() const;
    void display(const jsbind::String& value);
    jsbind::String ascentOverride() const;
    void ascentOverride(const jsbind::String& value);
    jsbind::String descentOverride() const;
    void descentOverride(const jsbind::String& value);
    jsbind::String lineGapOverride() const;
    void lineGapOverride(const jsbind::String& value);
    FontFaceLoadStatus status() const;
    jsbind::Promise<FontFace> load();
    jsbind::Promise<FontFace> loaded() const;
    FontFaceFeatures features() const;
    FontFaceVariations variations() const;
    FontFacePalettes palettes() const;
};

