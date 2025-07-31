#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystemHandle;


/// The LaunchParams class.
/// [`LaunchParams`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams)
class LaunchParams : public emlite::Val {
    explicit LaunchParams(Handle h) noexcept;

public:
    explicit LaunchParams(const emlite::Val &val) noexcept;
    static LaunchParams take_ownership(Handle h) noexcept;

    [[nodiscard]] LaunchParams clone() const noexcept;
    /// Getter of the `targetURL` attribute.
    /// [`LaunchParams.targetURL`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams/targetURL)
    [[nodiscard]] jsbind::String targetURL() const;
    /// Getter of the `files` attribute.
    /// [`LaunchParams.files`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams/files)
    [[nodiscard]] jsbind::TypedArray<FileSystemHandle> files() const;
};

