#set($USER = "maximart")
#set($CITY = "lyon")
#set($EXT = "fr")
#set($EMAIL = "${USER}@student.42${CITY}.${EXT}")
#set($H = "#")
#set($paddingLength = 51 - ${FILE_NAME.length()})
#if ($paddingLength < 1)
    #set($paddingLength = 1)
#end
#set($Padding = "")
#foreach($i in [1..$paddingLength])
    #set($Padding = "${Padding} ")
#end
#set($byTotalLength = 13 + ${USER.length()} + ${EMAIL.length()})
#set($byPaddingLength = 53 - $byTotalLength)
#if ($byPaddingLength < 1)
    #set($byPaddingLength = 1)
#end
#set($ByPadding = "")
#foreach($i in [1..$byPaddingLength])
    #set($ByPadding = "${ByPadding} ")
#end
#set($createdLength = 28 + ${USER.length()})
#set($createdPaddingLength = 49 - $createdLength)
#if ($createdPaddingLength < 1)
    #set($createdPaddingLength = 1)
#end
#set($CreatePadding = "")
#foreach($i in [1..$createdPaddingLength])
    #set($CreatePadding = "${CreatePadding} ")
#end
#set($updatedLength = 28 + ${USER.length()})
#set($updatedPaddingLength = 48 - $updatedLength)
#if ($updatedPaddingLength < 1)
    #set($updatedPaddingLength = 1)
#end
#set($UpdatePadding = "")
#foreach($i in [1..$updatedPaddingLength])
    #set($UpdatePadding = "${UpdatePadding} ")
#end
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ${FILE_NAME}${Padding}:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ${USER} <${EMAIL}>${ByPadding}+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ${YEAR}/${MONTH}/${DAY} ${HOUR}:${MINUTE}:${SECOND} by ${USER}${CreatePadding}#+#    #+#          */
/*   Updated: ${YEAR}/${MONTH}/${DAY} ${HOUR}:${MINUTE}:${SECOND} by ${USER}${UpdatePadding}${H}#${H}   #${H}#${H}#${H}#${H}.${EXT}    */
/*                                                                            */
/* ************************************************************************** */

