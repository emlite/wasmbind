#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class FileSystemHandle;

/// Interface LaunchParams
/// [`LaunchParams`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams)
class LaunchParams : public emlite::Val {
    explicit LaunchParams(Handle h) noexcept;
public:
    explicit LaunchParams(const emlite::Val &val) noexcept;
    static LaunchParams take_ownership(Handle h) noexcept;
    [[nodiscard]] LaunchParams clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`LaunchParams.targetURL`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams/targetURL)
    /// [`LaunchParams.targetURL`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams/targetURL)
    [[nodiscard]] jsbind::String targetURL() const;
    /// [`LaunchParams.files`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams/files)
    /// [`LaunchParams.files`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams/files)
    [[nodiscard]] jsbind::TypedArray<FileSystemHandle> files() const;
};

} // namespace webbind