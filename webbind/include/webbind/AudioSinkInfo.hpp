#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface AudioSinkInfo
/// [`AudioSinkInfo`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSinkInfo)
class AudioSinkInfo : public emlite::Val {
    explicit AudioSinkInfo(Handle h) noexcept;
public:
    explicit AudioSinkInfo(const emlite::Val &val) noexcept;
    static AudioSinkInfo take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSinkInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `type` attribute.
    /// [`AudioSinkInfo.type`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSinkInfo/type)
    [[nodiscard]] AudioSinkType type() const;
};

} // namespace webbind