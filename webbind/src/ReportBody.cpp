#include <webbind/ReportBody.hpp>

namespace webbind {

ReportBody::ReportBody(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReportBody ReportBody::take_ownership(Handle h) noexcept {
    return ReportBody(h);
}

ReportBody::ReportBody(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReportBody::ReportBody() noexcept: emlite::Val(emlite::Val::object()) {}

ReportBody ReportBody::clone() const noexcept { return *this; }


} // namespace webbind