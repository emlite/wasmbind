#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class FontFace;

/// Dictionary type FontFaceSetLoadEventInit
/// [`FontFaceSetLoadEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadEventInit)
class FontFaceSetLoadEventInit : public EventInit {
  explicit FontFaceSetLoadEventInit(Handle h) noexcept;
public:
    static FontFaceSetLoadEventInit take_ownership(Handle h) noexcept;
    explicit FontFaceSetLoadEventInit(const emlite::Val &val) noexcept;
    FontFaceSetLoadEventInit() noexcept;
    [[nodiscard]] FontFaceSetLoadEventInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<FontFace> fontfaces() const;
    void fontfaces(const jsbind::TypedArray<FontFace>& value);
};

} // namespace webbind