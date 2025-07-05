#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class URLSearchParams : public emlite::Val {
    explicit URLSearchParams(Handle h) noexcept;

public:
    explicit URLSearchParams(const emlite::Val &val) noexcept;
    static URLSearchParams take_ownership(Handle h) noexcept;

    URLSearchParams clone() const noexcept;
    URLSearchParams();
    URLSearchParams(const jsbind::Any& init);
    unsigned long size() const;
    jsbind::Undefined append(const jsbind::USVString& name, const jsbind::USVString& value);
    jsbind::Undefined delete_(const jsbind::USVString& name);
    jsbind::Undefined delete_(const jsbind::USVString& name, const jsbind::USVString& value);
    jsbind::USVString get(const jsbind::USVString& name);
    jsbind::Sequence<jsbind::USVString> getAll(const jsbind::USVString& name);
    bool has(const jsbind::USVString& name);
    bool has(const jsbind::USVString& name, const jsbind::USVString& value);
    jsbind::Undefined set(const jsbind::USVString& name, const jsbind::USVString& value);
    jsbind::Undefined sort();
};

