#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FontFaceDescriptors
/// [`FontFaceDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceDescriptors)
class FontFaceDescriptors : public emlite::Val {
  explicit FontFaceDescriptors(Handle h) noexcept;
public:
    static FontFaceDescriptors take_ownership(Handle h) noexcept;
    explicit FontFaceDescriptors(const emlite::Val &val) noexcept;
    FontFaceDescriptors() noexcept;
    [[nodiscard]] FontFaceDescriptors clone() const noexcept;
    [[nodiscard]] jsbind::String style() const;
    void style(const jsbind::String& value);
    [[nodiscard]] jsbind::String weight() const;
    void weight(const jsbind::String& value);
    [[nodiscard]] jsbind::String stretch() const;
    void stretch(const jsbind::String& value);
    [[nodiscard]] jsbind::String unicodeRange() const;
    void unicodeRange(const jsbind::String& value);
    [[nodiscard]] jsbind::String featureSettings() const;
    void featureSettings(const jsbind::String& value);
    [[nodiscard]] jsbind::String variationSettings() const;
    void variationSettings(const jsbind::String& value);
    [[nodiscard]] jsbind::String display() const;
    void display(const jsbind::String& value);
    [[nodiscard]] jsbind::String ascentOverride() const;
    void ascentOverride(const jsbind::String& value);
    [[nodiscard]] jsbind::String descentOverride() const;
    void descentOverride(const jsbind::String& value);
    [[nodiscard]] jsbind::String lineGapOverride() const;
    void lineGapOverride(const jsbind::String& value);
};

} // namespace webbind