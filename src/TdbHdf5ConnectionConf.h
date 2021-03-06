/*
 * Copyright (C) 2015-2017 Cybernetica
 *
 * Research/Commercial License Usage
 * Licensees holding a valid Research License or Commercial License
 * for the Software may use this file according to the written
 * agreement between you and Cybernetica.
 *
 * GNU General Public License Usage
 * Alternatively, this file may be used under the terms of the GNU
 * General Public License version 3.0 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in the
 * packaging of this file.  Please review the following information to
 * ensure the GNU General Public License version 3.0 requirements will be
 * met: http://www.gnu.org/copyleft/gpl-3.0.html.
 *
 * For further information, please contact us at sharemind@cyber.ee.
 */

#ifndef SHAREMIND_MOD_TABLEDB_HDF5_TDBHDF5CONNECTIONCONF_H
#define SHAREMIND_MOD_TABLEDB_HDF5_TDBHDF5CONNECTIONCONF_H

#include <string>


namespace sharemind {

class __attribute__ ((visibility("internal"))) TdbHdf5ConnectionConf {
public: /* Methods: */

    TdbHdf5ConnectionConf(std::string const & filename);

    inline std::string & getPath() { return m_path; }
    inline const std::string & getPath() const { return m_path; }

private: /* Fields: */

    std::string m_path;

}; /* class TdbHdf5ConnectionConf { */

} /* namespace sharemind */

#endif /* SHAREMIND_MOD_TABLEDB_HDF5_TDBHDF5CONNECTIONCONF_H */
