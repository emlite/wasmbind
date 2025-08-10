#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class FontFace;

/// Dictionary type FontFaceSetLoadEventInit
class FontFaceSetLoadEventInit : public EventInit {
  explicit FontFaceSetLoadEventInit(Handle h) noexcept;
public:
    static FontFaceSetLoadEventInit take_ownership(Handle h) noexcept;
    explicit FontFaceSetLoadEventInit(const emlite::Val &val) noexcept;
    FontFaceSetLoadEventInit() noexcept;
    [[nodiscard]] FontFaceSetLoadEventInit clone() const noexcept;
    /// Getter of the `fontfaces` attribute.
    [[nodiscard]] jsbind::TypedArray<FontFace> fontfaces() const;
    /// Setter of the `fontfaces` attribute.
    void fontfaces(const jsbind::TypedArray<FontFace>& value);
};

} // namespace webbind