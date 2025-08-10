#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Blob;

/// Interface FontData
/// [`FontData`](https://developer.mozilla.org/en-US/docs/Web/API/FontData)
class FontData : public emlite::Val {
    explicit FontData(Handle h) noexcept;
public:
    explicit FontData(const emlite::Val &val) noexcept;
    static FontData take_ownership(Handle h) noexcept;
    [[nodiscard]] FontData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The blob method.
    /// [`FontData.blob`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/blob)
    jsbind::Promise<Blob> blob();
    /// [`FontData.postscriptName`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/postscriptName)
    /// [`FontData.postscriptName`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/postscriptName)
    [[nodiscard]] jsbind::String postscriptName() const;
    /// [`FontData.fullName`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/fullName)
    /// [`FontData.fullName`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/fullName)
    [[nodiscard]] jsbind::String fullName() const;
    /// [`FontData.family`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/family)
    /// [`FontData.family`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/family)
    [[nodiscard]] jsbind::String family() const;
    /// [`FontData.style`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/style)
    /// [`FontData.style`](https://developer.mozilla.org/en-US/docs/Web/API/FontData/style)
    [[nodiscard]] jsbind::String style() const;
};

} // namespace webbind