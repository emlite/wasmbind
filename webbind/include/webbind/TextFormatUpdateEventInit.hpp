#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class TextFormat;

/// Dictionary type TextFormatUpdateEventInit
class TextFormatUpdateEventInit : public EventInit {
  explicit TextFormatUpdateEventInit(Handle h) noexcept;
public:
    static TextFormatUpdateEventInit take_ownership(Handle h) noexcept;
    explicit TextFormatUpdateEventInit(const emlite::Val &val) noexcept;
    TextFormatUpdateEventInit() noexcept;
    [[nodiscard]] TextFormatUpdateEventInit clone() const noexcept;
    /// Getter of the `textFormats` attribute.
    [[nodiscard]] jsbind::TypedArray<TextFormat> textFormats() const;
    /// Setter of the `textFormats` attribute.
    void textFormats(const jsbind::TypedArray<TextFormat>& value);
};

} // namespace webbind