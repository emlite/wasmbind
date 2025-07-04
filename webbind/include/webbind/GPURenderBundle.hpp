#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPURenderBundle : public emlite::Val {
    explicit GPURenderBundle(Handle h) noexcept;

public:
    explicit GPURenderBundle(const emlite::Val &val) noexcept;
    static GPURenderBundle take_ownership(Handle h) noexcept;

    GPURenderBundle clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

