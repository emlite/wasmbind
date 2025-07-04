#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystemHandle;


class LaunchParams : public emlite::Val {
    explicit LaunchParams(Handle h) noexcept;

public:
    explicit LaunchParams(const emlite::Val &val) noexcept;
    static LaunchParams take_ownership(Handle h) noexcept;

    LaunchParams clone() const noexcept;
    jsbind::DOMString targetURL() const;
    jsbind::FrozenArray<FileSystemHandle> files() const;
};

