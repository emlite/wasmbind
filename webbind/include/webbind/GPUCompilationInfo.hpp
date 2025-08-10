#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUCompilationMessage;

/// Interface GPUCompilationInfo
/// [`GPUCompilationInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationInfo)
class GPUCompilationInfo : public emlite::Val {
    explicit GPUCompilationInfo(Handle h) noexcept;
public:
    explicit GPUCompilationInfo(const emlite::Val &val) noexcept;
    static GPUCompilationInfo take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCompilationInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUCompilationInfo.messages`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationInfo/messages)
    /// [`GPUCompilationInfo.messages`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationInfo/messages)
    [[nodiscard]] jsbind::TypedArray<GPUCompilationMessage> messages() const;
};

} // namespace webbind