#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WorkerLocation : public emlite::Val {
    explicit WorkerLocation(Handle h) noexcept;

public:
    explicit WorkerLocation(const emlite::Val &val) noexcept;
    static WorkerLocation take_ownership(Handle h) noexcept;

    WorkerLocation clone() const noexcept;
    jsbind::USVString href() const;
    jsbind::USVString origin() const;
    jsbind::USVString protocol() const;
    jsbind::USVString host() const;
    jsbind::USVString hostname() const;
    jsbind::USVString port() const;
    jsbind::USVString pathname() const;
    jsbind::USVString search() const;
    jsbind::USVString hash() const;
};

