#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;
class HTMLElement;
class HTMLFormElement;


class FormData : public emlite::Val {
    explicit FormData(Handle h) noexcept;

public:
    explicit FormData(const emlite::Val &val) noexcept;
    static FormData take_ownership(Handle h) noexcept;

    FormData clone() const noexcept;
    FormData(const HTMLFormElement& form, const HTMLElement& submitter);
    jsbind::Undefined append(const jsbind::USVString& name, const Blob& blobValue, const jsbind::USVString& filename);
    jsbind::Undefined delete_(const jsbind::USVString& name);
    jsbind::Any get(const jsbind::USVString& name);
    jsbind::Sequence<jsbind::Any> getAll(const jsbind::USVString& name);
    bool has(const jsbind::USVString& name);
    jsbind::Undefined set(const jsbind::USVString& name, const Blob& blobValue, const jsbind::USVString& filename);
};

