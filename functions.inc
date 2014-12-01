<?php

function showLegacyPhotos( $path )
{
  $d = dir( $path );
  $cols = 4;
  
  echo <<<END
<table width="100%" border="0" cellpadding="3" cellspacing="1">
END;
  
  $i = 0;
  
  while( false !== ($entry = $d->read()) )
  {
    if( substr( $entry, 0, 1 ) != "." && !strstr( $entry, "_thumb" ) )
    {
      if( $i % $cols == 0 )
      {
        echo <<<END
  <tr>
END;
      }
      
      $thumb_name = substr( $entry, 0, strpos( $entry, "." ) ) . "_thumb" . strstr( $entry, "." );
      
      echo <<<END
    <td align="center" valign="center">
      <a href="$path/$entry"><img src="$path/$thumb_name" style="border: 1px solid black;"></a>
    </td>
END;
      
      if( $i % $cols == ($cols - 1) )
      {
        echo <<<END
  </tr>
END;
      }
      
      $i++;
    }
  }
  
  $i = $i % $cols;
  
  for( $j = $i; $j < $cols; $j++ )
  {
    echo <<<END
    <td>
      &nbsp;
    </td>
END;
  }
  
  if( $i > 0 )
  {
    echo <<<END
  </tr>
END;
  }
  
  echo <<<END
</table>
END;
}

?>